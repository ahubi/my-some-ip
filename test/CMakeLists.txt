enable_testing()

add_executable(
  unit_test
  main.cpp
)

FILE(GLOB GEN_SRCS ../src-gen/*cpp)

add_library(my-some-ip
  ${GEN_SRCS}
  ../src/HelloWorldStubImpl.cpp
  ../src/ApplicationFabric/LinuxApplication.cpp
  ../src/ApplicationFabric/LinuxApplicationFabric.cpp
  ../src/model/RandomSubject.cpp
  ../src/model/SyslogSubject.cpp
  ../src/someip/RandomObserver.cpp
  ../src/someip/SyslogObserver.cpp
)
target_link_libraries(
  unit_test
  gtest_main
  my-some-ip
  CommonAPI
)

include(GoogleTest)
gtest_discover_tests(unit_test)