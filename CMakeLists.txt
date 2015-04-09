# build chrobosim
project (CHROBOSIM)

# set minimum cmake version
cmake_minimum_required (VERSION 2.8)

# specify -DCH_ROOT=C:/path/to/ch on the command line, or
# set CH_ROOT as an environment variable, or
# default to C:/Ch
if (NOT DEFINED CH_ROOT)
	if (DEFINED ENV{CH_ROOT})
		set (CH_ROOT $ENV{CH_ROOT})
	else ()
		if (WIN32)
			set (CH_ROOT "C:/Ch")
		else ()
			set (CH_ROOT "/usr/local/ch")
		endif ()
	endif ()
endif ()

set (VERBOSE 1)

# set developer warnings
if (WIN32)
	add_definitions (-D_CRT_SECURE_NO_WARNINGS)
else ()
	set (CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wno-write-strings")
endif ()

# set gcc compiler version
set (CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

# include directory
#include_directories (
#	"${CHROBOSIM_SOURCE_DIR}/include/"
#	"${CHROBOSIM_BINARY_DIR}"
#)

# add source files to library
set (SRCS ${SRCS}
	/home/kgucwa/projects/librobosim/src/robosim.cpp
	/home/kgucwa/projects/librobosim/src/robot.cpp
	/home/kgucwa/projects/librobosim/src/linkbot.cpp
	src/chdl/clinkboti_chdl.cpp
	src/chdl/clinkbotl_chdl.cpp
)

# add librs library
include_directories ("/home/kgucwa/projects/librs/include")
link_directories ("/home/kgucwa/projects/librs/build/lib")
set (EXTRA_LIBS ${EXTRA_LIBS} optimized rs debug rsd)
set (EXTRA_LIBS ${EXTRA_LIBS} optimized rsRobots debug rsRobotsd)
set (EXTRA_LIBS ${EXTRA_LIBS} optimized rsSim debug rsSimd)
set (EXTRA_LIBS ${EXTRA_LIBS} optimized rsScene debug rsScened)
set (EXTRA_LIBS ${EXTRA_LIBS} optimized rsCallback debug rsCallbackd)
set (EXTRA_LIBS ${EXTRA_LIBS} optimized rsXML debug rsXMLd)

# add ODE headers
if (WIN32)
	include_directories ("/home/kgucwa/projects/librs/deps/ode/include")
else ()
	include_directories ("/home/kgucwa/projects/librs/deps/ode/sys/include")
endif ()

# ODE options
add_definitions (-DdDOUBLE)
add_definitions (-DdNODEBUG)

# add OpenSceneGraph headers
include_directories ("/home/kgucwa/projects/librs/deps/osg/build/include")
include_directories ("/home/kgucwa/projects/librs/deps/osg/include")

# add tinyxml2 headers
include_directories ("/home/kgucwa/projects/librs/deps/tinyxml2")

# add librobosim headers
include_directories ("/home/kgucwa/projects/librobosim/include")

# add the library
add_library (chrobosim SHARED ${SRCS})

# link library against dependencies
target_link_libraries (chrobosim PUBLIC ${EXTRA_LIBS})
if (WIN32)
	target_link_libraries (chrobosim PUBLIC
		${CH_ROOT}/extern/lib/chsdk.lib
		${CH_ROOT}/extern/lib/ch.lib)
else ()
	target_link_libraries(chrobosim PUBLIC
		${CH_ROOT}/extern/lib/libchsdk.a)
endif ()

# rename chrobosim.dl to librobosim.dl
set_target_properties (chrobosim PROPERTIES OUTPUT_NAME robosim SUFFIX .dl)

# include ch headers
target_include_directories (chrobosim PUBLIC ${CH_ROOT}/extern/include)

# create package with shell script
add_custom_target (package sh ../createpkg.sh SOURCES ../createpkg.sh librobosim.dl)

