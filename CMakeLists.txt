cmake_minimum_required(VERSION 3.17)
project(application)

set(CMAKE_CXX_STANDARD 11)

include_directories(../../lib/vc_x64_lib/mswu)
include_directories(../../include)
include_directories(.)
link_directories(../../lib/vc_x64_lib)


add_definitions(
        -DWIN32
        -D_CRT_SECURE_NO_DEPRECATE=1
        -D_CRT_NON_CONFORMING_SWPRINTFS=1
        -D_SCL_SECURE_NO_WARNINGS=1
        -D__WXMSW__
        -DNDEBUG
        -D_UNICODE
        -D_WINDOWS
        -DNOPCH
)

link_libraries(
        wxmsw32u_aui.lib
        wxmsw32u_html.lib
        wxmsw32u_core.lib
        wxbase32u_xml.lib
        wxbase32u.lib
        wxtiff.lib
        wxjpeg.lib
        wxpng.lib
        wxzlib.lib
        wxregexu.lib
        wxexpat.lib
        kernel32.lib
        user32.lib
        gdi32.lib
        comdlg32.lib
        winspool.lib
        winmm.lib
        shell32.lib
        shlwapi.lib
        comctl32.lib
        ole32.lib
        oleaut32.lib
        uuid.lib
        rpcrt4.lib
        advapi32.lib
        version.lib
        ws2_32.lib
        wininet.lib
)

add_executable(main main.cpp)

add_subdirectory(samples)

add_executable(application application.cpp MyProjectBase.cpp)
if (WIN32)
    target_sources(application PRIVATE sample.rc)
    set_target_properties(application PROPERTIES WIN32_EXECUTABLE ON)
endif ()