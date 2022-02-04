#ifndef LINUXAPPLICATION_H_
#define LINUXAPPLICATION_H_
#include <signal.h>
#include <iostream>
#include "IApplication.h"
#include "../model/RandomSubject.h"
#include "../someip/RandomObserver.h"

using namespace std;

class LinuxApplication
:IApplication
{
private:
  shared_ptr<CommonAPI::Runtime> mRuntime;
  shared_ptr<HelloWorldStubImpl> myService;
public:
  LinuxApplication();
  ~LinuxApplication();
  virtual void startApplication();
  virtual void stopApplication();
  
};
#endif