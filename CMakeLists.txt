cmake_minimum_required(VERSION 3.16)

project(proto-game-jam-working VERSION 0.1 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Qt6 6.5 REQUIRED COMPONENTS Quick)

qt_standard_project_setup(REQUIRES 6.5)

qt_add_executable(appproto-game-jam-working
    main.cpp game.h game.cpp
)

set_target_properties(appproto-game-jam-working PROPERTIES
    AUTOMOC ON  # This ensures MOC is automatically handled
)

qt_add_qml_module(appproto-game-jam-working
    URI proto-game-jam-working
    VERSION 1.0
    QML_FILES
        Main.qml
        SOURCES game.h game.cpp
)

# Qt for iOS sets MACOSX_BUNDLE_GUI_IDENTIFIER automatically since Qt 6.1.
# If you are developing for iOS or macOS you should consider setting an
# explicit, fixed bundle identifier manually though.
set_target_properties(appproto-game-jam-working PROPERTIES
#    MACOSX_BUNDLE_GUI_IDENTIFIER com.example.appproto-game-jam-working
    MACOSX_BUNDLE_BUNDLE_VERSION ${PROJECT_VERSION}
    MACOSX_BUNDLE_SHORT_VERSION_STRING ${PROJECT_VERSION_MAJOR}.${PROJECT_VERSION_MINOR}
    MACOSX_BUNDLE TRUE
    WIN32_EXECUTABLE TRUE
)

target_link_libraries(appproto-game-jam-working
    PRIVATE Qt6::Quick
)

include(GNUInstallDirs)
install(TARGETS appproto-game-jam-working
    BUNDLE DESTINATION .
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
