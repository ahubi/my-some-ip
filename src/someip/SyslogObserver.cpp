#include "SyslogObserver.h"

SyslogObserver::SyslogObserver(std::shared_ptr<HelloWorldStubImpl> service_)
{
    myService = service_;
}

SyslogObserver::~SyslogObserver()
{
}

void SyslogObserver::update(void* data) {
  std::string str = *(std::string*)data;
  myService->fireStatusEvent(str);
}