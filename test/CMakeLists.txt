enable_testing()

add_executable(
  unit_test
  main.cpp
)
add_library(my-some-ip
../src/HelloWorldStubImpl.cpp
../src/ApplicationFabric/LinuxApplication.cpp
../src/ApplicationFabric/LinuxApplicationFabric.cpp
../src/model/RandomSubject.cpp
../src/model/SyslogSubject.cpp
../src/someip/RandomObserver.cpp
../src/someip/SyslogObserver.cpp
../src-gen/v1/commonapi/HelloWorldSomeIPStubAdapter.cpp
../src-gen/v1/commonapi/HelloWorldStubDefault.hpp
../src-gen/v1/commonapi/HelloWorldSomeIPDeployment.cpp
)
target_link_libraries(
  unit_test
  gtest_main
  my-some-ip
  CommonAPI
)

include(GoogleTest)
gtest_discover_tests(unit_test)