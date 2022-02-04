#ifndef LINUXAPPLICATION_H_
#define LINUXAPPLICATION_H_
#include <signal.h>
#include <iostream>
#include "IApplication.h"
#include "../model/RandomSubject.h"
#include "../someip/SomeIPObserver.h"

using namespace std;

class LinuxApplication
:IApplication
{
private:
  /* data */
public:
  LinuxApplication();
  ~LinuxApplication();
  virtual void startApplication();
  virtual void stopApplication();
  
};
#endif