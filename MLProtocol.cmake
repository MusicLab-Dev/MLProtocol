project(MLProtocol)

get_filename_component(MLProtocolDir ${CMAKE_CURRENT_LIST_FILE} PATH)

include(${MLProtocolDir}/MLProtocol/MLProtocolLib.cmake)

if (${ML_TESTS})
    include(${MLProtocolDir}/Tests/MLProtocolTests.cmake)
endif ()

if (${ML_BENCHMARKS})
    include(${MLProtocolDir}/Benchmarks/MLProtocolBenchmarks.cmake)
endif ()