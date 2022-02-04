#include "RandomSubject.h"

RandomSubject::RandomSubject()
:ISubject()
{
  const lock_guard<mutex> lock_guard(mObserverMutex);
  mObservers.clear();
  mIfs.open("/dev/random", ifstream::in);
}

RandomSubject::~RandomSubject()
{
  const lock_guard<mutex> lock_guard(mObserverMutex);
  mObservers.clear();
  mIfs.close();
}

void RandomSubject::addObserver(IObserver* observer_)
{
  const lock_guard<mutex> lock_guard(mObserverMutex);
  mObservers.push_back(observer_);
}
void RandomSubject::removeObserver(IObserver* observer_)
{
  const lock_guard<mutex> lock_guard(mObserverMutex);
  mObservers.remove(observer_);
}
void RandomSubject::notify()
{
  const lock_guard<mutex> lock_guard(mObserverMutex);
  for(auto observer:mObservers)
    observer->update(&mData);
}
void RandomSubject::run()
{
  while(mIfs.good())
  {
    mIfs.read((char*)&mData, sizeof(mData));
    std::cout << "read from random: " << mData << endl;
    notify();
    //this_thread::sleep_for(std::chrono::seconds(3));
  }
}