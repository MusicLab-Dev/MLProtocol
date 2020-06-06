project(MLProtocolBenchmarks)

set(MLProtocolBenchmarksDir ${MLProtocolDir}/Benchmarks)

set(MLProtocolBenchmarksSources
    ${MLProtocolBenchmarksDir}/Main.cpp
    ${MLProtocolBenchmarksDir}/bench_Packet.cpp
)

add_executable(${CMAKE_PROJECT_NAME} ${MLProtocolBenchmarksSources})

target_link_libraries(${CMAKE_PROJECT_NAME}
PUBLIC
    MLProtocolLib
    benchmark
)