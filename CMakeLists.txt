cmake_minimum_required(VERSION 3.0.0)
project(thriftdemo VERSION 0.1.0)

set(CMAKE_CXX_STANDARD 17)

# include(CTest)
# enable_testing()
# set(OpenCV_DIR /usr/local/Cellar/opencv/4.6.0)
set(OpenCV_DIR "/Users/fy/tool/vcpkg/installed/x64-osx/share/opencv4")

# 链接自定义的库项目
add_subdirectory(lib/multi_fusion_uds)
include_directories(
    ${OpenCV_INCLUDE_DIRS}
    ${CMAKE_CURRENT_SOURCE_DIR}/include
    ${CMAKE_CURRENT_SOURCE_DIR}/lib/multi_fusion_uds/include
)

find_path(BSHOSHANY_THREAD_POOL_INCLUDE_DIRS "BS_thread_pool.hpp")
find_package(json-dto CONFIG REQUIRED)
find_package(Thrift CONFIG REQUIRED)

add_executable(${PROJECT_NAME} src/main.cpp)


# add_executable(mec2_fusion src/redis_test.cpp)
target_link_libraries(${PROJECT_NAME} PRIVATE json-dto::json-dto)
target_link_libraries(${PROJECT_NAME} PRIVATE thrift::thrift thriftz::thriftz)


# 链接自定义的库
target_link_libraries(${PROJECT_NAME} PRIVATE multi_fusion_uds)

# set(CPACK_PROJECT_NAME ${PROJECT_NAME})
# set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
# include(CPack)
