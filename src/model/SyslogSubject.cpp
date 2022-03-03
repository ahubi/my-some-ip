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
  random_device rd;  //Will be used to obtain a seed for the random number engine
  mt19937 gen(rd()); //Standard mersenne_twister_engine seeded with rd()
  uniform_int_distribution<> distrib(1, 5);
  while(mIfs.good())
  {
    int sleep = distrib(gen);
    getline(mIfs, mData);
    cout << "read from syslog, sleep for: " << sleep << endl;
    notify();
    this_thread::sleep_for(std::chrono::seconds(sleep));
  }
}