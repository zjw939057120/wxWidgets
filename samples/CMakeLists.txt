add_executable(dataview dataview.cpp mymodels.cpp)
add_executable(calendar calendar.cpp)

if (WIN32)
    target_sources(dataview PRIVATE ../sample.rc)
    set_target_properties(dataview PROPERTIES WIN32_EXECUTABLE ON)

    target_sources(calendar PRIVATE ../sample.rc)
    set_target_properties(calendar PROPERTIES WIN32_EXECUTABLE ON)
endif ()
