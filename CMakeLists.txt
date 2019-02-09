##---------------------------------------------------------------------------
## Author:      Rasbats aka. Mike Rossiter
## Copyright:
## License:     wxWidgets License
##---------------------------------------------------------------------------

# define minimum cmake version
CMAKE_MINIMUM_REQUIRED(VERSION 2.6.2)

PROJECT(DR_pi)

SET(PACKAGE_NAME DR_pi)
SET(VERBOSE_NAME DR)
SET(TITLE_NAME DR)
SET(CPACK_PACKAGE_CONTACT "Mike Rossiter")

SET(VERSION_MAJOR "2")
SET(VERSION_MINOR "1")

#SET(CMAKE_BUILD_TYPE Debug)
SET( wxWidgets_USE_DEBUG OFF)
SET( wxWidgets_USE_UNICODE ON)
SET( wxWidgets_USE_UNIVERSAL OFF)
SET( wxWidgets_USE_STATIC OFF)

INCLUDE("cmake/PluginConfigure.cmake")

SET(SRC_DR
        src/DR_pi.h
        src/DR_pi.cpp
        src/icons.h
        src/icons.cpp
	    src/DRgui.h
	    src/DRgui.cpp
	    src/DRgui_impl.cpp
	    src/DRgui_impl.h
	    src/NavFunc.h
	    src/NavFunc.cpp
		src/ocpn_plugin.h
		src/tinyxml.cpp
        src/tinyxmlerror.cpp
        src/tinyxmlparser.cpp
        src/tinyxml.h
	)


ADD_LIBRARY(${PACKAGE_NAME} SHARED ${SRC_DR})

ADD_DEFINITIONS(-DTIXML_USE_STL)

INCLUDE("cmake/PluginInstall.cmake")
INCLUDE("cmake/PluginLocalization.cmake")
INCLUDE("cmake/PluginPackage.cmake")
