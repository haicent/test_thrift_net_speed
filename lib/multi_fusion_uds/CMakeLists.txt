cmake_minimum_required(VERSION 3.0.0)
project(multi_fusion_uds VERSION 0.1.0)

# include(CTest)
# enable_testing()

find_package(Thrift CONFIG REQUIRED)
include_directories(BEFORE "include")

add_library(${PROJECT_NAME} src/multi_fusion_types.cpp src/AlgorithmApi.cpp)

target_link_libraries(${PROJECT_NAME} PRIVATE thrift::thrift thriftz::thriftz)

# set(CPACK_PROJECT_NAME ${PROJECT_NAME})
# set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
# include(CPack)
