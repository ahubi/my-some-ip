#ifndef IAPPLICATIONFABRIC_H_
#define IAPPLICATIONFABRIC_H_

#include "IApplication.h"

class IApplicationFabric
{
private:
  /* data */
public:
  IApplicationFabric(){};
  ~IApplicationFabric(){};
  virtual IApplication* createApplication() = 0;
};
#endif
