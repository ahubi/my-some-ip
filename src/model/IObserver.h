#ifndef IOBSERVER_H_
#define IOBSERVER_H_

class IObserver
{
private:
  /* data */
public:
  IObserver(){};
  ~IObserver(){};
  virtual void update(void* data) = 0;
};
#endif