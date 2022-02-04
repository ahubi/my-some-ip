#include "LinuxApplicationFabric.h"

LinuxApplicationFabric::LinuxApplicationFabric()
:IApplicationFabric()
{
}

LinuxApplicationFabric::~LinuxApplicationFabric()
{
}

IApplication* LinuxApplicationFabric::createApplication()
{
  IApplication* app = (IApplication*) new LinuxApplication();
  return app;
}