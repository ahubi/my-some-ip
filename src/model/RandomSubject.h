#ifndef IRANDOMSUBJECT_H_
#define IRANDOMSUBJECT_H_

#include "ISubject.h"
#include <list>
#include <mutex>
#include <thread>
#include <fstream>
#include <iostream>

using namespace std;

class RandomSubject
:ISubject
{
private:
  list<IObserver*> mObservers;
  mutex mObserverMutex;
  int mData;
  ifstream mIfs;
public:
  RandomSubject();
  ~RandomSubject();
  virtual void addObserver(IObserver*);
  virtual void removeObserver(IObserver*);
  virtual void notify();
  void run();
};

#endif