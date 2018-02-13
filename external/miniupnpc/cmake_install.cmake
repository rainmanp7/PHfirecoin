# Install script for directory: C:/!-PHF Cryptonight/GIT/external/miniupnpc

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "C:/Program Files (x86)/DigitalNote")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "MinSizeRel")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY FILES "C:/!-PHF Cryptonight/GIT/external/miniupnpc/libminiupnpc.a")
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/miniupnpc" TYPE FILE FILES
    "C:/!-PHF Cryptonight/GIT/external/miniupnpc/miniupnpc.h"
    "C:/!-PHF Cryptonight/GIT/external/miniupnpc/miniwget.h"
    "C:/!-PHF Cryptonight/GIT/external/miniupnpc/upnpcommands.h"
    "C:/!-PHF Cryptonight/GIT/external/miniupnpc/igd_desc_parse.h"
    "C:/!-PHF Cryptonight/GIT/external/miniupnpc/upnpreplyparse.h"
    "C:/!-PHF Cryptonight/GIT/external/miniupnpc/upnperrors.h"
    "C:/!-PHF Cryptonight/GIT/external/miniupnpc/declspec.h"
    )
endif()

