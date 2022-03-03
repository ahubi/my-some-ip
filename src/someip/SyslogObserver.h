#ifndef SYSLOGOBSERVER_H_
#define SYSLOGOBSERVER_H_

#include "../model/IObserver.h"
#include "../HelloWorldStubImpl.hpp"
#include <string>
#include <boost/asio.hpp>
#include <boost/bind.hpp>
#include <boost/date_time/posix_time/posix_time.hpp>

class SyslogObserver
:IObserver
{
private:
  std::shared_ptr<HelloWorldStubImpl> myService;
  boost::asio::deadline_timer mTimer;
public:
  SyslogObserver(std::shared_ptr<HelloWorldStubImpl> service_, boost::asio::io_service& io_);
  ~SyslogObserver();
  virtual void update(void* data);
  void on_timeout(const boost::system::error_code& error);

};
#endif


