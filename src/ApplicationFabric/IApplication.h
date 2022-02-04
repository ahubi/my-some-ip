#ifndef IAPPLICATION_H_
#define IAPPLICATION_H_
class IApplication
{
private:
  /* data */
public:
  IApplication(){};
  ~IApplication(){};
  virtual void startApplication() = 0;
  virtual void stopApplication() = 0;
};
#endif
