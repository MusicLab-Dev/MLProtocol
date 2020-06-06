project(MLProtocolTests)

set(MLProtocolTestsDir ${MLProtocolDir}/Tests)

set(MLProtocolTestsSources
    ${MLProtocolTestsDir}/tests_Packet.cpp
)

add_executable(${CMAKE_PROJECT_NAME} ${MLProtocolTestsSources})

add_test(NAME ${CMAKE_PROJECT_NAME} COMMAND ${CMAKE_PROJECT_NAME})

target_link_libraries(${CMAKE_PROJECT_NAME}
PUBLIC
    MLProtocolLib
    GTest::GTest GTest::Main
)