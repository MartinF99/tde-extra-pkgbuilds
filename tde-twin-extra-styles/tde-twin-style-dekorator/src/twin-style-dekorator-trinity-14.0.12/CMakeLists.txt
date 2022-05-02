############################################
#                                          #
#  Improvements and feedbacks are welcome  #
#                                          #
#  This file is released under GPL >= 3    #
#                                          #
############################################


cmake_minimum_required( VERSION 3.1 )


#### general package setup

project( twin-style-dekorator )
set( VERSION R14.0.12 )


#### include essential cmake modules

include( FindPkgConfig          )
include( CheckFunctionExists    )
include( CheckSymbolExists      )
include( CheckIncludeFile       )
include( CheckLibraryExists     )
include( CheckCSourceCompiles   )
include( CheckCXXSourceCompiles )


#### include our cmake modules

set( CMAKE_MODULE_PATH "${CMAKE_SOURCE_DIR}/cmake/modules" )
include( TDEMacros )


##### setup install paths

include( TDESetupPaths )
tde_setup_paths( )


##### optional stuff

option( WITH_ALL_OPTIONS "Enable all optional support" OFF                                          )
option( WITH_GCC_VISIBILITY "Enable fvisibility and fvisibility-inlines-hidden" ${WITH_ALL_OPTIONS} )


##### user requested modules

option( BUILD_ALL          "Build all" ON )
option( BUILD_TRANSLATIONS "Build translations"  ${BUILD_ALL} )


##### configure checks

include( ConfigureChecks.cmake )


###### global compiler settings

add_definitions( -DHAVE_CONFIG_H )

set( CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} ${QT_CXX_FLAGS}" )
set( CMAKE_SHARED_LINKER_FLAGS "${CMAKE_SHARED_LINKER_FLAGS} -Wl,--no-undefined" )
set( CMAKE_MODULE_LINKER_FLAGS "${CMAKE_MODULE_LINKER_FLAGS} -Wl,--no-undefined" )


##### directories

add_subdirectory( client )
add_subdirectory( themes )


##### other data

tde_conditional_add_project_translations( BUILD_TRANSLATIONS )


##### write configure files

configure_file( config.h.cmake config.h @ONLY )
