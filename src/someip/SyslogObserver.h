#ifndef SYSLOGOBSERVER_H_
#define SYSLOGOBSERVER_H_

#include "../model/IObserver.h"
#include "../HelloWorldStubImpl.hpp"
#include <string>

class SyslogObserver
:IObserver
{
private:
  std::shared_ptr<HelloWorldStubImpl> myService;
public:
  SyslogObserver(std::shared_ptr<HelloWorldStubImpl> service_);
  ~SyslogObserver();
  virtual void update(void* data);

};
#endif


