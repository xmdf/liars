
find_package(spdlog REQUIRED)

set(LIARS_HEADER_FILES
        dice.hpp
        utils.hpp)

set(LIARS_SOURCE_FILES
        dice.cpp
        utils.cpp)

add_library(liars STATIC
        "${LIARS_HEADER_FILES}"
        "${LIARS_SOURCE_FILES}")

target_include_directories(liars PUBLIC "${CMAKE_CURRENT_LIST_DIR}" "${CMAKE_CURRENT_BINARY_DIR}")
target_include_directories(liars PRIVATE "${ROOT}/include")
target_link_directories(liars PRIVATE "${ROOT}/lib/")

set_target_properties(liars
        PROPERTIES
        PUBLIC_HEADER "${LIARS_HEADERS_FILES}")

target_link_libraries(liars PRIVATE
        spdlog::spdlog)