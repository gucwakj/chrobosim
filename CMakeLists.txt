# build chrobosim
project (ChRoboSim)

# set minimum cmake version
cmake_minimum_required (VERSION 2.8)

# default to release build
set (CMAKE_BUILD_TYPE Release)

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

# verbose output
set (CMAKE_VERBOSE_MAKEFILE off)

# set developer warnings
if (WIN32)
	add_definitions (-D_CRT_SECURE_NO_WARNINGS)
else ()
	set (CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -Wall -Wno-write-strings")
endif ()

# add ODE headers
if (WIN32)
	include_directories ("C:/Users/kgucwa/projects/librs/deps/ode/include")
	link_directories ("C:/Users/kgucwa/projects/librs/deps/ode/lib/Release")
else ()
	include_directories ("/home/kgucwa/projects/librs/deps/ode/sys/include")
	link_directories ("/home/kgucwa/projects/librs/deps/ode/sys/lib")
endif ()
set (EXTRA_LIBS ${EXTRA_LIBS} optimized ode debug oded)

# ODE options
add_definitions (-DdDOUBLE)
add_definitions (-DdNODEBUG)

# add OpenSceneGraph headers
if (WIN32)
	include_directories ("C:/Users/kgucwa/projects/librs/deps/osg3.4.0/build/include")
	include_directories ("C:/Users/kgucwa/projects/librs/deps/osg3.4.0/include")
	link_directories ("C:/Users/kgucwa/projects/librs/deps/osg3.4.0/build/lib")
else ()
	include_directories ("/home/kgucwa/projects/librs/deps/osg3.4.0/build/include")
	include_directories ("/home/kgucwa/projects/librs/deps/osg3.4.0/include")
	link_directories ("/home/kgucwa/projects/librs/deps/osg3.4.0/build/lib")
endif()
set (EXTRA_LIBS ${EXTRA_LIBS} optimized OpenThreads debug OpenThreadsd)
set (EXTRA_LIBS ${EXTRA_LIBS} optimized osg debug osgd)
set (EXTRA_LIBS ${EXTRA_LIBS} optimized osgDB debug osgDBd)
set (EXTRA_LIBS ${EXTRA_LIBS} optimized osgFX debug osgFXd)
set (EXTRA_LIBS ${EXTRA_LIBS} optimized osgGA debug osgGAd)
set (EXTRA_LIBS ${EXTRA_LIBS} optimized osgShadow debug osgShadowd)
set (EXTRA_LIBS ${EXTRA_LIBS} optimized osgText debug osgTextd)
set (EXTRA_LIBS ${EXTRA_LIBS} optimized osgUtil debug osgUtild)
set (EXTRA_LIBS ${EXTRA_LIBS} optimized osgViewer debug osgViewerd)

# add tinyxml2 headers
if (WIN32)
	include_directories ("C:/Users/kgucwa/projects/librs/deps/tinyxml2")
	link_directories ("C:/Users/kgucwa/projects/librs/deps/tinyxml2/build/lib")
else ()
	include_directories ("/home/kgucwa/projects/librs/deps/tinyxml2")
	link_directories ("/home/kgucwa/projects/librs/deps/tinyxml2/build/lib")
endif()
set (EXTRA_LIBS ${EXTRA_LIBS} optimized tinyxml2 debug tinyxml2d)

# add LibRS library
if (WIN32)
	include_directories ("C:/Users/kgucwa/projects/librs/include")
	include_directories ("C:/Users/kgucwa/projects/librs/build")
	link_directories ("C:/Users/kgucwa/projects/librs/build/lib")
else ()
	include_directories ("/home/kgucwa/projects/librs/include")
	include_directories ("/home/kgucwa/projects/librs/build")
	link_directories ("/home/kgucwa/projects/librs/build/lib")
endif ()
set (EXTRA_LIBS ${EXTRA_LIBS} optimized rs debug rsd)
set (EXTRA_LIBS ${EXTRA_LIBS} optimized rsRobots debug rsRobotsd)
set (EXTRA_LIBS ${EXTRA_LIBS} optimized rsScene debug rsScened)
set (EXTRA_LIBS ${EXTRA_LIBS} optimized rsCallback debug rsCallbackd)
set (EXTRA_LIBS ${EXTRA_LIBS} optimized rsSim debug rsSimd)
set (EXTRA_LIBS ${EXTRA_LIBS} optimized rsXML debug rsXMLd)

# add libRoboSim headers
if (WIN32)
	include_directories ("C:/Users/kgucwa/projects/librobosim/include")
else ()
	include_directories ("/home/kgucwa/projects/librobosim/include")
endif()

# add librobosim sources
if (WIN32)
	set (SRCS ${SRCS}
		C:/Users/kgucwa/projects/librobosim/src/robosim.cpp
		C:/Users/kgucwa/projects/librobosim/src/robot.cpp
		C:/Users/kgucwa/projects/librobosim/src/linkbot.cpp
		C:/Users/kgucwa/projects/librobosim/src/mindstorms.cpp
		C:/Users/kgucwa/projects/librobosim/src/rgbhashtable.c
	)
else ()
	set (SRCS ${SRCS}
		/home/kgucwa/projects/librobosim/src/robosim.cpp
		/home/kgucwa/projects/librobosim/src/robot.cpp
		/home/kgucwa/projects/librobosim/src/linkbot.cpp
		/home/kgucwa/projects/librobosim/src/mindstorms.cpp
		/home/kgucwa/projects/librobosim/src/rgbhashtable.c
	)
endif ()

# add source files to library
set (SRCS ${SRCS}
	src/chdl/clinkboti_chdl.cpp
	src/chdl/clinkbotl_chdl.cpp
	src/chdl/cmindstorms_chdl.cpp
)

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

