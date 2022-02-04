#ifndef ISUBJECT_H_
#define ISUBJECT_H_

#include "IObserver.h"

class ISubject
{
private:
  /* data */
public:
  ISubject(){};
  ~ISubject(){};
  virtual void addObserver(IObserver*) = 0;
  virtual void removeObserver(IObserver*) = 0;
  virtual void notify() = 0;
};
#endif
