#include "SomeIPObserver.h"

SomeIPObserver::SomeIPObserver() {
  mRuntime = CommonAPI::Runtime::get();
  myService = std::make_shared<HelloWorldStubImpl>();
  mRuntime->registerService("local", "test", myService);
  std::cout << "Successfully Registered Service!" << std::endl;
}

SomeIPObserver::~SomeIPObserver() {
}

void SomeIPObserver::update(void* data) {
  int i = 0;
  CustomTypes::AttributeStruct attr = CustomTypes::AttributeStruct(i, "RandomSubject");
  int num = *(int*)data;
  attr.setAttrNum(num);
  myService->setAttrStatusAttribute(attr);
}