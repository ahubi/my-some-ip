#include "RandomObserver.h"

RandomObserver::RandomObserver(shared_ptr<HelloWorldStubImpl> service_)
{
  myService = service_;
}

RandomObserver::~RandomObserver() {
}

void RandomObserver::update(void* data) {
  int i = 0;
  CustomTypes::AttributeStruct attr = CustomTypes::AttributeStruct(i, "RandomSubject");
  int num = *(int*)data;
  attr.setAttrNum(num);
  myService->setAttrStatusAttribute(attr);
}