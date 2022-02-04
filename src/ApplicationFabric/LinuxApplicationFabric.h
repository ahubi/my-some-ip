#ifndef LINUXAPPLICATIONFABRIC_H_
#define LINUXAPPLICATIONFABRIC_H_

#include "IApplicationFabric.h"
#include "LinuxApplication.h"

class LinuxApplicationFabric
:IApplicationFabric
{
private:
  /* data */
public:
  LinuxApplicationFabric();
  ~LinuxApplicationFabric();
  virtual IApplication* createApplication();
};
#endif
