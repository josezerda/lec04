file(GLOB_RECURSE TEST_SOURCES CONFIGURE_DEPENDS *.cpp)
add_executable(test_runner ${TEST_SOURCES})
target_link_libraries(test_runner PRIVATE ${PROJECT_NAME})
add_test(NAME test_runner COMMAND test_runner)
