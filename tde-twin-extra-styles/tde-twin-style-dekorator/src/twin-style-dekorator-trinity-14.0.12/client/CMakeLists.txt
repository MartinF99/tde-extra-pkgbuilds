tde_import( twin )

add_subdirectory( config )

include_directories(
  ${CMAKE_BINARY_DIR}
  ${CMAKE_CURRENT_BINARY_DIR}
  ${CMAKE_CURRENT_SOURCE_DIR}
  ${TDE_INCLUDE_DIR}
  ${TQT_INCLUDE_DIRS}
)

link_directories(
  ${TQT_LIBRARY_DIRS}
  ${TDE_LIBRARY_DIRS}
)


##### twin3_deKorator (kpart)

tde_add_kpart( twin3_deKorator AUTOMOC

  SOURCES
        deKoratorclient.cpp
        shadow.cpp
  LINK
     tdecore-shared
     tdeui-shared
     tdecorations-shared

  DESTINATION ${PLUGIN_INSTALL_DIR}
)


##### other data

tde_create_translated_desktop(
    SOURCE deKorator.desktop
    DESTINATION ${DATA_INSTALL_DIR}/twin
)
