project(MLProtocolLib)

get_filename_component(MLProtocolLibDir ${CMAKE_CURRENT_LIST_FILE} PATH)

set(MLProtocolLibSources
    ${MLProtocolLibDir}/Protocol.hpp
    ${MLProtocolLibDir}/Packet.hpp
    ${MLProtocolLibDir}/Packet.cpp
)

add_library(${PROJECT_NAME} ${MLProtocolLibSources})

target_include_directories(${PROJECT_NAME} PUBLIC ${MLProtocolDir})

# target_link_libraries(${PROJECT_NAME}
# PUBLIC
# )
