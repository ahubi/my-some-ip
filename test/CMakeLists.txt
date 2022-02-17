enable_testing()

add_executable(
  unit_test
  main.cpp
)
target_link_libraries(
  unit_test
  gtest_main
)

include(GoogleTest)
gtest_discover_tests(unit_test)