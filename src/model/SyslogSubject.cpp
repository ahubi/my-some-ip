#include "SyslogSubject.h"

SyslogSubject::SyslogSubject(/* args */)
{
  const lock_guard<mutex> lock_guard(mObserverMutex);
  mObservers.clear();
  mIfs.open("/var/log/syslog", ifstream::in);
}

SyslogSubject::~SyslogSubject()
{
  const lock_guard<mutex> lock_guard(mObserverMutex);
  mObservers.clear();
  mIfs.close();
}

void SyslogSubject::addObserver(IObserver* observer_)
{
  const lock_guard<mutex> lock_guard(mObserverMutex);
  mObservers.push_back(observer_);
}
void SyslogSubject::removeObserver(IObserver* observer_)
{
  const lock_guard<mutex> lock_guard(mObserverMutex);
  mObservers.remove(observer_);
}
void SyslogSubject::notify()
{
  const lock_guard<mutex> lock_guard(mObserverMutex);
  for(auto observer:mObservers)
    observer->update(&mData);
}
void SyslogSubject::run()
{
  while(mIfs.good())
  {
    std::getline(mIfs, mData);
    std::cout << "read from syslog: " << mData << endl;
    notify();
    this_thread::sleep_for(std::chrono::seconds(3));
  }
}