#include "SomeIPObserver.h"

SomeIPObserver::SomeIPObserver(shared_ptr<HelloWorldStubImpl> service_)
{
  myService = service_;
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