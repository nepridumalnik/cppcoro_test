set(TARGET
    cppcoro_exec
)

set(SOURCES
    main.cpp
)

set(INCLUDES
    ${andreasbuhr-cppcoro_INCLUDE_DIRS}
)

set(LIBRARIES
    andreasbuhr-cppcoro::andreasbuhr-cppcoro
)

add_executable(${TARGET} ${SOURCES})
target_include_directories(${TARGET} PRIVATE ${INCLUDES})
target_link_libraries(${TARGET} PRIVATE ${LIBRARIES})
