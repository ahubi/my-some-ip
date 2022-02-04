#ifndef SOMEIPOBSERVER_H_
#define SOMEIPOBSERVER_H_

#include "../model/IObserver.h"
#include <CommonAPI/CommonAPI.hpp>
#include <v1/commonapi/CustomTypes.hpp>
#include "../HelloWorldStubImpl.hpp"


using namespace std;
using namespace v1_0::commonapi;

class SomeIPObserver
:IObserver
{
private:
  std::shared_ptr<CommonAPI::Runtime> mRuntime;
  std::shared_ptr<HelloWorldStubImpl> myService;
public:
  SomeIPObserver();
  ~SomeIPObserver();
  virtual void update(void* data);
};

#endif