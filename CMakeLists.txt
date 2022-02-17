cmake_minimum_required(VERSION 2.8)

get_filename_component(RUNTIME_PATH ../ ABSOLUTE)
message(STATUS ${RUNTIME_PATH})

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -pthread -std=c++11 -fpermissive")

include(FetchContent)
FetchContent_Declare(
  googletest
  GIT_REPOSITORY https://github.com/google/googletest.git
  GIT_TAG        release-1.11.0
)
# For Windows: Prevent overriding the parent project's compiler/linker settings
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

include_directories(
    src-gen
    ${RUNTIME_PATH}/capicxx-core-runtime/include
    ${RUNTIME_PATH}/capicxx-someip-runtime/include
    ${RUNTIME_PATH}/vsomeip/interface
)
link_directories(
    ${RUNTIME_PATH}/capicxx-core-runtime/build
    ${RUNTIME_PATH}/capicxx-someip-runtime/build
    ${RUNTIME_PATH}/vsomeip/build
)

add_library(my-some-ip
src/HelloWorldStubImpl.cpp
src/ApplicationFabric/LinuxApplication.cpp
src/ApplicationFabric/LinuxApplicationFabric.cpp
src/model/RandomSubject.cpp
src/model/SyslogSubject.cpp
src/someip/RandomObserver.cpp
src/someip/SyslogObserver.cpp
src-gen/v1/commonapi/HelloWorldSomeIPStubAdapter.cpp
src-gen/v1/commonapi/HelloWorldStubDefault.hpp
src-gen/v1/commonapi/HelloWorldSomeIPDeployment.cpp
)

add_executable(HelloWorldClient
	src/HelloWorldClient.cpp
	src-gen/v1/commonapi/HelloWorldSomeIPProxy.cpp
	src-gen/v1/commonapi/HelloWorldSomeIPDeployment.cpp
)
target_link_libraries(HelloWorldClient CommonAPI CommonAPI-SomeIP vsomeip3)

add_executable(HelloWorldService
							src/HelloWorldService.cpp)

target_link_libraries(HelloWorldService my-some-ip CommonAPI CommonAPI-SomeIP vsomeip3)
add_subdirectory(test)