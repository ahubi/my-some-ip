#include "SyslogObserver.h"

SyslogObserver::SyslogObserver(std::shared_ptr<HelloWorldStubImpl> service_, boost::asio::io_service& io_)
:mTimer(io_)
{
    myService = service_;
}

SyslogObserver::~SyslogObserver()
{
}

void SyslogObserver::update(void* data) {
  std::string str = *(std::string*)data;
  myService->fireStatusEvent(str);
  mTimer.expires_from_now(boost::posix_time::millisec(5000));
  mTimer.async_wait(boost::bind(&SyslogObserver::on_timeout, this, boost::asio::placeholders::error));
}

void SyslogObserver::on_timeout(const boost::system::error_code& error){
  if (!error)
  {
    myService->fireStatusEvent("Timeout occured in SyslogObserver");
    //std::cout << "Timeout occured in SyslogObserver" << std::endl;
  }
}