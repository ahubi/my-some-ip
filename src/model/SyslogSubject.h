#ifndef ISYSLOGSUBJECT_H_
#define ISYSLOGSUBJECT_H_

#include "ISubject.h"
#include <string>
#include <list>
#include <mutex>
#include <thread>
#include <fstream>
#include <iostream>
#include <random>

using namespace std;

class SyslogSubject
:ISubject
{
private:
  list<IObserver*> mObservers;
  mutex mObserverMutex;
  string mData;
  ifstream mIfs;
public:
  SyslogSubject(/* args */);
  ~SyslogSubject();
  virtual void addObserver(IObserver*);
  virtual void removeObserver(IObserver*);
  virtual void notify();
  void run();
};

#endif