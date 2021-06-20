
find_package(GTest REQUIRED)

add_executable(liars_tests main.cpp test_utils.cpp)

target_include_directories(liars_tests PUBLIC
        "${CMAKE_CURRENT_SOURCE_DIR}/src")

target_link_libraries(liars_tests
        liars
        GTest::gtest GTest::gtest_main)

add_test(
        NAME liars_tests
        COMMAND liars_tests)

include(GoogleTest)
gtest_discover_tests(liars_tests)