#!/bin/sh

PACKAGE=chrobosim
VERSION=osx-1.9.90
PKGDIR=$PACKAGE-$VERSION/$PACKAGE

ROOT=".."
LIBRSPATH="../../librs"
RSPATH="../../RoboSim"
QTPATH="/Users/kgucwa/Qt/5.7/clang_64"

# output for user
echo "Building $PACKAGE-$VERSION.zip ..."

# clean old build
rm -rf $PACKAGE-$VERSION
rm -rf $PACKAGE-$VERSION.zip

# make new build dir
mkdir -p $PKGDIR

# installers
cp $ROOT/Makefile $PACKAGE-$VERSION
cp $ROOT/pkginstall.ch $PACKAGE-$VERSION

# legalese
cp $ROOT/COPYRIGHT $PKGDIR
cp $ROOT/CHANGELOG $PKGDIR

# chf libs
mkdir $PKGDIR/lib
cp $ROOT/src/chf/delay.chf $PKGDIR/lib
cp $ROOT/src/chf/systemTime.chf $PKGDIR/lib
cp $ROOT/src/chf/clinkboti.chf $PKGDIR/lib
cp $ROOT/src/chf/clinkbotl.chf $PKGDIR/lib
cp $ROOT/src/chf/cmindstorms.chf $PKGDIR/lib

# dl
mkdir $PKGDIR/dl
cp $ROOT/build/librobosim.dl $PKGDIR/dl/robosim.dl

# headers
mkdir $PKGDIR/include
cp $ROOT/include/linkbot.h $PKGDIR/include
cp $ROOT/include/mindstorms.h $PKGDIR/include
cp $ROOT/include/robosim.h $PKGDIR/include
cp $ROOT/include/macros.h $PKGDIR/include

# binaries
mkdir $PKGDIR/bin
cp "$LIBRSPATH/build/lib/librs.0.dylib" $PKGDIR/bin
cp "$LIBRSPATH/build/lib/librsCommunication.0.dylib" $PKGDIR/bin
cp "$LIBRSPATH/build/lib/librsRobots.0.dylib" $PKGDIR/bin
cp "$LIBRSPATH/build/lib/librsScene.0.dylib" $PKGDIR/bin
cp "$LIBRSPATH/build/lib/librsSim.0.dylib" $PKGDIR/bin
cp "$LIBRSPATH/build/lib/librsXML.0.dylib" $PKGDIR/bin
cp "$LIBRSPATH/build/src/rsScene/rssceneapp" $PKGDIR/bin
cp "$LIBRSPATH/deps/ode/sys/lib/libode.1.dylib" $PKGDIR/bin
cp "$LIBRSPATH/deps/osg3.4.0/build/lib/libosg.130.dylib" $PKGDIR/bin
cp "$LIBRSPATH/deps/osg3.4.0/build/lib/libosgDB.130.dylib" $PKGDIR/bin
cp "$LIBRSPATH/deps/osg3.4.0/build/lib/libosgFX.130.dylib" $PKGDIR/bin
cp "$LIBRSPATH/deps/osg3.4.0/build/lib/libosgGA.130.dylib" $PKGDIR/bin
cp "$LIBRSPATH/deps/osg3.4.0/build/lib/libosgShadow.130.dylib" $PKGDIR/bin
cp "$LIBRSPATH/deps/osg3.4.0/build/lib/libosgText.130.dylib" $PKGDIR/bin
cp "$LIBRSPATH/deps/osg3.4.0/build/lib/libosgUtil.130.dylib" $PKGDIR/bin
cp "$LIBRSPATH/deps/osg3.4.0/build/lib/libosgViewer.130.dylib" $PKGDIR/bin
cp "$LIBRSPATH/deps/osg3.4.0/build/lib/libOpenThreads.20.dylib" $PKGDIR/bin
cp "$LIBRSPATH/deps/tinyxml2/build/lib/libtinyxml2.1.dylib" $PKGDIR/bin
cp "$LIBRSPATH/deps/zeromq/sys/lib/libzmq.5.dylib" $PKGDIR/bin
mkdir $PKGDIR/bin/RoboSim.app
cp -R "$RSPATH/build/bin/RoboSim.app" "$PKGDIR/bin/RoboSim.app"
cp -R "$RSPATH/icons" $PKGDIR/bin
mkdir "$PKGDIR/bin/osgPlugins-3.4.0"
cp "$LIBRSPATH/deps/osg3.4.0/build/lib/osgPlugins-3.4.0/osgdb_imageio.so" "$PKGDIR/bin/osgPlugins-3.4.0"
cp "$LIBRSPATH/deps/osg3.4.0/build/lib/osgPlugins-3.4.0/osgdb_3ds.so" "$PKGDIR/bin/osgPlugins-3.4.0"

# docs
mkdir $PKGDIR/docs
cp "$RSPATH/docs/robosim.pdf" $PKGDIR/docs
cp "$RSPATH/docs/pictures/robosim.png" $PKGDIR/docs

# demos
mkdir $PKGDIR/demos
cp -R $ROOT/demos/ $PKGDIR/demos

# resources
mkdir $PKGDIR/data
cp -R "$LIBRSPATH/resources/background" $PKGDIR/data
cp -R "$LIBRSPATH/resources/challenges" $PKGDIR/data
cp -R "$LIBRSPATH/resources/linkbot" $PKGDIR/data
cp -R "$LIBRSPATH/resources/mindstorms" $PKGDIR/data
cp -R "$LIBRSPATH/resources/obstacles" $PKGDIR/data

# redo dl paths
INPATH="/usr/local/ch/package/chrobosim/bin"
install_name_tool -id "$INPATH/robosim.dl" "$PKGDIR/dl/robosim.dl"
install_name_tool -id "$INPATH/libode.1.dylib" "$PKGDIR/bin/libode.1.dylib"
install_name_tool -id "$INPATH/libOpenThreads.20.dylib" "$PKGDIR/bin/libOpenThreads.20.dylib"
install_name_tool -id "$INPATH/libosg.130.dylib" "$PKGDIR/bin/libosg.130.dylib"
install_name_tool -id "$INPATH/libosgDB.130.dylib" "$PKGDIR/bin/libosgDB.130.dylib"
install_name_tool -id "$INPATH/libosgFX.130.dylib" "$PKGDIR/bin/libosgFX.130.dylib"
install_name_tool -id "$INPATH/libosgGA.130.dylib" "$PKGDIR/bin/libosgGA.130.dylib"
install_name_tool -id "$INPATH/libosgShadow.130.dylib" "$PKGDIR/bin/libosgShadow.130.dylib"
install_name_tool -id "$INPATH/libosgText.130.dylib" "$PKGDIR/bin/libosgText.130.dylib"
install_name_tool -id "$INPATH/libosgUtil.130.dylib" "$PKGDIR/bin/libosgUtil.130.dylib"
install_name_tool -id "$INPATH/libosgViewer.130.dylib" "$PKGDIR/bin/libosgViewer.130.dylib"
install_name_tool -id "$INPATH/libtinyxml2.1.dylib" "$PKGDIR/bin/libtinyxml2.1.dylib"
install_name_tool -id "$INPATH/libzmq.5.dylib" "$PKGDIR/bin/libzmq.5.dylib"

# change links for robosim.dl
install_name_tool -change "/Users/kgucwa/projects/chrobosim/build/librobosim.dl" "$INPATH/robosim.dl" "$PKGDIR/dl/robosim.dl"
install_name_tool -change "/Users/kgucwa/projects/librs/deps/ode/sys64/lib/libode.1.dylib" "$INPATH/libode.1.dylib" "$PKGDIR/dl/robosim.dl"
install_name_tool -change "/Users/kgucwa/projects/librs/deps/osg3.4.0/build/lib/libOpenThreads.20.dylib" "$INPATH/libOpenThreads.20.dylib" "$PKGDIR/dl/robosim.dl"
install_name_tool -change "/Users/kgucwa/projects/librs/deps/osg3.4.0/build/lib/libosg.130.dylib" "$INPATH/libosg.130.dylib" "$PKGDIR/dl/robosim.dl"
install_name_tool -change "/Users/kgucwa/projects/librs/deps/osg3.4.0/build/lib/libosgDB.130.dylib" "$INPATH/libosgDB.130.dylib" "$PKGDIR/dl/robosim.dl"
install_name_tool -change "/Users/kgucwa/projects/librs/deps/osg3.4.0/build/lib/libosgFX.130.dylib" "$INPATH/libosgFX.130.dylib" "$PKGDIR/dl/robosim.dl"
install_name_tool -change "/Users/kgucwa/projects/librs/deps/osg3.4.0/build/lib/libosgGA.130.dylib" "$INPATH/libosgGA.130.dylib" "$PKGDIR/dl/robosim.dl"
install_name_tool -change "/Users/kgucwa/projects/librs/deps/osg3.4.0/build/lib/libosgShadow.130.dylib" "$INPATH/libosgShadow.130.dylib" "$PKGDIR/dl/robosim.dl"
install_name_tool -change "/Users/kgucwa/projects/librs/deps/osg3.4.0/build/lib/libosgText.130.dylib" "$INPATH/libosgText.130.dylib" "$PKGDIR/dl/robosim.dl"
install_name_tool -change "/Users/kgucwa/projects/librs/deps/osg3.4.0/build/lib/libosgUtil.130.dylib" "$INPATH/libosgUtil.130.dylib" "$PKGDIR/dl/robosim.dl"
install_name_tool -change "/Users/kgucwa/projects/librs/deps/osg3.4.0/build/lib/libosgViewer.130.dylib" "$INPATH/libosgViewer.130.dylib" "$PKGDIR/dl/robosim.dl"
install_name_tool -change "/Users/kgucwa/projects/librs/deps/tinyxml2/build/lib/libtinyxml2.1.dylib" "$INPATH/libtinyxml2.1.dylib" "$PKGDIR/dl/robosim.dl"
install_name_tool -change "@rpath/librs.0.dylib" "$INPATH/librs.0.dylib" "$PKGDIR/dl/robosim.dl"
install_name_tool -change "@rpath/librsCommunication.0.dylib" "$INPATH/librsCommunication.0.dylib" "$PKGDIR/dl/robosim.dl"
install_name_tool -change "@rpath/librsRobots.0.dylib" "$INPATH/librsRobots.0.dylib" "$PKGDIR/dl/robosim.dl"
install_name_tool -change "@rpath/librsScene.0.dylib" "$INPATH/librsScene.0.dylib" "$PKGDIR/dl/robosim.dl"
install_name_tool -change "@rpath/librsSim.0.dylib" "$INPATH/librsSim.0.dylib" "$PKGDIR/dl/robosim.dl"
install_name_tool -change "@rpath/librsXML.0.dylib" "$INPATH/librsXML.0.dylib" "$PKGDIR/dl/robosim.dl"

# change link paths for libRS
install_name_tool -change "/Users/kgucwa/projects/librs/deps/zeromq/sys64/lib/libzmq.5.dylib" "$INPATH/libzmq.5.dylib" "$PKGDIR/bin/librsCommunication.0.dylib"
install_name_tool -change "/Users/kgucwa/projects/librs/deps/osg3.4.0/build/lib/libOpenThreads.20.dylib" "$INPATH/libOpenThreads.20.dylib" "$PKGDIR/bin/librsScene.0.dylib"
install_name_tool -change "/Users/kgucwa/projects/librs/deps/osg3.4.0/build/lib/libosg.130.dylib" "$INPATH/libosg.130.dylib" "$PKGDIR/bin/librsScene.0.dylib"
install_name_tool -change "/Users/kgucwa/projects/librs/deps/osg3.4.0/build/lib/libosgDB.130.dylib" "$INPATH/libosgDB.130.dylib" "$PKGDIR/bin/librsScene.0.dylib"
install_name_tool -change "/Users/kgucwa/projects/librs/deps/osg3.4.0/build/lib/libosgFX.130.dylib" "$INPATH/libosgFX.130.dylib" "$PKGDIR/bin/librsScene.0.dylib"
install_name_tool -change "/Users/kgucwa/projects/librs/deps/osg3.4.0/build/lib/libosgGA.130.dylib" "$INPATH/libosgGA.130.dylib" "$PKGDIR/bin/librsScene.0.dylib"
install_name_tool -change "/Users/kgucwa/projects/librs/deps/osg3.4.0/build/lib/libosgShadow.130.dylib" "$INPATH/libosgShadow.130.dylib" "$PKGDIR/bin/librsScene.0.dylib"
install_name_tool -change "/Users/kgucwa/projects/librs/deps/osg3.4.0/build/lib/libosgText.130.dylib" "$INPATH/libosgText.130.dylib" "$PKGDIR/bin/librsScene.0.dylib"
install_name_tool -change "/Users/kgucwa/projects/librs/deps/osg3.4.0/build/lib/libosgUtil.130.dylib" "$INPATH/libosgUtil.130.dylib" "$PKGDIR/bin/librsScene.0.dylib"
install_name_tool -change "/Users/kgucwa/projects/librs/deps/osg3.4.0/build/lib/libosgViewer.130.dylib" "$INPATH/libosgViewer.130.dylib" "$PKGDIR/bin/librsScene.0.dylib"
install_name_tool -change "/Users/kgucwa/projects/librs/deps/zeromq/sys64/lib/libzmq.5.dylib" "$INPATH/libzmq.5.dylib" "$PKGDIR/bin/librsScene.0.dylib"
install_name_tool -change "/Users/kgucwa/projects/librs/deps/ode/sys64/lib/libode.1.dylib" "$INPATH/libode.1.dylib" "$PKGDIR/bin/librsSim.0.dylib"
install_name_tool -change "/Users/kgucwa/projects/librs/deps/zeromq/sys64/lib/libzmq.5.dylib" "$INPATH/libzmq.5.dylib" "$PKGDIR/bin/librsSim.0.dylib"
install_name_tool -change "/Users/kgucwa/projects/librs/deps/tinyxml2/build/lib/libtinyxml2.1.dylib" "$INPATH/libtinyxml2.1.dylib" "$PKGDIR/bin/librsXML.0.dylib"
install_name_tool -change "@rpath/librs.0.dylib" "$INPATH/librs.0.dylib" "$PKGDIR/bin/librs.0.dylib"
install_name_tool -change "@rpath/librs.0.dylib" "$INPATH/librs.0.dylib" "$PKGDIR/bin/librsCommunication.0.dylib"
install_name_tool -change "@rpath/librsCommunication.0.dylib" "$INPATH/librsCommunication.0.dylib" "$PKGDIR/bin/librsCommunication.0.dylib"
install_name_tool -change "@rpath/librs.0.dylib" "$INPATH/librs.0.dylib" "$PKGDIR/bin/librsRobots.0.dylib"
install_name_tool -change "@rpath/librsRobots.0.dylib" "$INPATH/librsRobots.0.dylib" "$PKGDIR/bin/librsRobots.0.dylib"
install_name_tool -change "@rpath/librs.0.dylib" "$INPATH/librs.0.dylib" "$PKGDIR/bin/librsScene.0.dylib"
install_name_tool -change "@rpath/librsRobots.0.dylib" "$INPATH/librsRobots.0.dylib" "$PKGDIR/bin/librsScene.0.dylib"
install_name_tool -change "@rpath/librsCommunication.0.dylib" "$INPATH/librsCommunication.0.dylib" "$PKGDIR/bin/librsScene.0.dylib"
install_name_tool -change "@rpath/librsScene.0.dylib" "$INPATH/librsScene.0.dylib" "$PKGDIR/bin/librsScene.0.dylib"
install_name_tool -change "@rpath/librs.0.dylib" "$INPATH/librs.0.dylib" "$PKGDIR/bin/librsSim.0.dylib"
install_name_tool -change "@rpath/librsRobots.0.dylib" "$INPATH/librsRobots.0.dylib" "$PKGDIR/bin/librsSim.0.dylib"
install_name_tool -change "@rpath/librsCommunication.0.dylib" "$INPATH/librsCommunication.0.dylib" "$PKGDIR/bin/librsSim.0.dylib"
install_name_tool -change "@rpath/librsSim.0.dylib" "$INPATH/librsSim.0.dylib" "$PKGDIR/bin/librsSim.0.dylib"
install_name_tool -change "@rpath/librs.0.dylib" "$INPATH/librs.0.dylib" "$PKGDIR/bin/librsXML.0.dylib"
install_name_tool -change "@rpath/librsRobots.0.dylib" "$INPATH/librsRobots.0.dylib" "$PKGDIR/bin/librsXML.0.dylib"
install_name_tool -change "@rpath/librsXML.0.dylib" "$INPATH/librsXML.0.dylib" "$PKGDIR/bin/librsXML.0.dylib"

# change links for rssceneapp
install_name_tool -change "/Users/kgucwa/projects/librs/deps/osg3.4.0/build/lib/libOpenThreads.20.dylib" "$INPATH/libOpenThreads.20.dylib" "$PKGDIR/bin/rssceneapp"
install_name_tool -change "/Users/kgucwa/projects/librs/deps/osg3.4.0/build/lib/libosg.130.dylib" "$INPATH/libosg.130.dylib" "$PKGDIR/bin/rssceneapp"
install_name_tool -change "/Users/kgucwa/projects/librs/deps/osg3.4.0/build/lib/libosgDB.130.dylib" "$INPATH/libosgDB.130.dylib" "$PKGDIR/bin/rssceneapp"
install_name_tool -change "/Users/kgucwa/projects/librs/deps/osg3.4.0/build/lib/libosgFX.130.dylib" "$INPATH/libosgFX.130.dylib" "$PKGDIR/bin/rssceneapp"
install_name_tool -change "/Users/kgucwa/projects/librs/deps/osg3.4.0/build/lib/libosgGA.130.dylib" "$INPATH/libosgGA.130.dylib" "$PKGDIR/bin/rssceneapp"
install_name_tool -change "/Users/kgucwa/projects/librs/deps/osg3.4.0/build/lib/libosgShadow.130.dylib" "$INPATH/libosgShadow.130.dylib" "$PKGDIR/bin/rssceneapp"
install_name_tool -change "/Users/kgucwa/projects/librs/deps/osg3.4.0/build/lib/libosgText.130.dylib" "$INPATH/libosgText.130.dylib" "$PKGDIR/bin/rssceneapp"
install_name_tool -change "/Users/kgucwa/projects/librs/deps/osg3.4.0/build/lib/libosgUtil.130.dylib" "$INPATH/libosgUtil.130.dylib" "$PKGDIR/bin/rssceneapp"
install_name_tool -change "/Users/kgucwa/projects/librs/deps/osg3.4.0/build/lib/libosgViewer.130.dylib" "$INPATH/libosgViewer.130.dylib" "$PKGDIR/bin/rssceneapp"
install_name_tool -change "/Users/kgucwa/projects/librs/deps/zeromq/sys64/lib/libzmq.5.dylib" "$INPATH/libzmq.5.dylib" "$PKGDIR/bin/rssceneapp"
install_name_tool -change "@rpath/librs.0.dylib" "$INPATH/librs.0.dylib" "$PKGDIR/bin/rssceneapp"
install_name_tool -change "@rpath/librsCommunication.0.dylib" "$INPATH/librsCommunication.0.dylib" "$PKGDIR/bin/rssceneapp"
install_name_tool -change "@rpath/librsRobots.0.dylib" "$INPATH/librsRobots.0.dylib" "$PKGDIR/bin/rssceneapp"
install_name_tool -change "@rpath/librsScene.0.dylib" "$INPATH/librsScene.0.dylib" "$PKGDIR/bin/rssceneapp"

# change links for OSG
install_name_tool -change "/Users/kgucwa/projects/librs/deps/osg3.4.0/build/lib/libOpenThreads.20.dylib" "$INPATH/libOpenThreads.20.dylib" "$PKGDIR/bin/libosg.130.dylib"
install_name_tool -change "/Users/kgucwa/projects/librs/deps/osg3.4.0/build/lib/libOpenThreads.20.dylib" "$INPATH/libOpenThreads.20.dylib" "$PKGDIR/bin/libosgDB.130.dylib"
install_name_tool -change "/Users/kgucwa/projects/librs/deps/osg3.4.0/build/lib/libosg.130.dylib" "$INPATH/libosg.130.dylib" "$PKGDIR/bin/libosgDB.130.dylib"
install_name_tool -change "/Users/kgucwa/projects/librs/deps/osg3.4.0/build/lib/libosgUtil.130.dylib" "$INPATH/libosgUtil.130.dylib" "$PKGDIR/bin/libosgDB.130.dylib"
install_name_tool -change "/Users/kgucwa/projects/librs/deps/osg3.4.0/build/lib/libOpenThreads.20.dylib" "$INPATH/libOpenThreads.20.dylib" "$PKGDIR/bin/libosgFX.130.dylib"
install_name_tool -change "/Users/kgucwa/projects/librs/deps/osg3.4.0/build/lib/libosg.130.dylib" "$INPATH/libosg.130.dylib" "$PKGDIR/bin/libosgFX.130.dylib"
install_name_tool -change "/Users/kgucwa/projects/librs/deps/osg3.4.0/build/lib/libosgDB.130.dylib" "$INPATH/libosgDB.130.dylib" "$PKGDIR/bin/libosgFX.130.dylib"
install_name_tool -change "/Users/kgucwa/projects/librs/deps/osg3.4.0/build/lib/libosgUtil.130.dylib" "$INPATH/libosgUtil.130.dylib" "$PKGDIR/bin/libosgFX.130.dylib"
install_name_tool -change "/Users/kgucwa/projects/librs/deps/osg3.4.0/build/lib/libOpenThreads.20.dylib" "$INPATH/libOpenThreads.20.dylib" "$PKGDIR/bin/libosgGA.130.dylib"
install_name_tool -change "/Users/kgucwa/projects/librs/deps/osg3.4.0/build/lib/libosg.130.dylib" "$INPATH/libosg.130.dylib" "$PKGDIR/bin/libosgGA.130.dylib"
install_name_tool -change "/Users/kgucwa/projects/librs/deps/osg3.4.0/build/lib/libosgDB.130.dylib" "$INPATH/libosgDB.130.dylib" "$PKGDIR/bin/libosgGA.130.dylib"
install_name_tool -change "/Users/kgucwa/projects/librs/deps/osg3.4.0/build/lib/libosgUtil.130.dylib" "$INPATH/libosgUtil.130.dylib" "$PKGDIR/bin/libosgGA.130.dylib"
install_name_tool -change "/Users/kgucwa/projects/librs/deps/osg3.4.0/build/lib/libOpenThreads.20.dylib" "$INPATH/libOpenThreads.20.dylib" "$PKGDIR/bin/libosgShadow.130.dylib"
install_name_tool -change "/Users/kgucwa/projects/librs/deps/osg3.4.0/build/lib/libosg.130.dylib" "$INPATH/libosg.130.dylib" "$PKGDIR/bin/libosgShadow.130.dylib"
install_name_tool -change "/Users/kgucwa/projects/librs/deps/osg3.4.0/build/lib/libosgDB.130.dylib" "$INPATH/libosgDB.130.dylib" "$PKGDIR/bin/libosgShadow.130.dylib"
install_name_tool -change "/Users/kgucwa/projects/librs/deps/osg3.4.0/build/lib/libosgUtil.130.dylib" "$INPATH/libosgUtil.130.dylib" "$PKGDIR/bin/libosgShadow.130.dylib"
install_name_tool -change "/Users/kgucwa/projects/librs/deps/osg3.4.0/build/lib/libOpenThreads.20.dylib" "$INPATH/libOpenThreads.20.dylib" "$PKGDIR/bin/libosgText.130.dylib"
install_name_tool -change "/Users/kgucwa/projects/librs/deps/osg3.4.0/build/lib/libosg.130.dylib" "$INPATH/libosg.130.dylib" "$PKGDIR/bin/libosgText.130.dylib"
install_name_tool -change "/Users/kgucwa/projects/librs/deps/osg3.4.0/build/lib/libosgDB.130.dylib" "$INPATH/libosgDB.130.dylib" "$PKGDIR/bin/libosgText.130.dylib"
install_name_tool -change "/Users/kgucwa/projects/librs/deps/osg3.4.0/build/lib/libosgUtil.130.dylib" "$INPATH/libosgUtil.130.dylib" "$PKGDIR/bin/libosgText.130.dylib"
install_name_tool -change "/Users/kgucwa/projects/librs/deps/osg3.4.0/build/lib/libOpenThreads.20.dylib" "$INPATH/libOpenThreads.20.dylib" "$PKGDIR/bin/libosgUtil.130.dylib"
install_name_tool -change "/Users/kgucwa/projects/librs/deps/osg3.4.0/build/lib/libosg.130.dylib" "$INPATH/libosg.130.dylib" "$PKGDIR/bin/libosgUtil.130.dylib"
install_name_tool -change "/Users/kgucwa/projects/librs/deps/osg3.4.0/build/lib/libOpenThreads.20.dylib" "$INPATH/libOpenThreads.20.dylib" "$PKGDIR/bin/libosgViewer.130.dylib"
install_name_tool -change "/Users/kgucwa/projects/librs/deps/osg3.4.0/build/lib/libosg.130.dylib" "$INPATH/libosg.130.dylib" "$PKGDIR/bin/libosgViewer.130.dylib"
install_name_tool -change "/Users/kgucwa/projects/librs/deps/osg3.4.0/build/lib/libosgDB.130.dylib" "$INPATH/libosgDB.130.dylib" "$PKGDIR/bin/libosgViewer.130.dylib"
install_name_tool -change "/Users/kgucwa/projects/librs/deps/osg3.4.0/build/lib/libosgGA.130.dylib" "$INPATH/libosgGA.130.dylib" "$PKGDIR/bin/libosgViewer.130.dylib"
install_name_tool -change "/Users/kgucwa/projects/librs/deps/osg3.4.0/build/lib/libosgText.130.dylib" "$INPATH/libosgText.130.dylib" "$PKGDIR/bin/libosgViewer.130.dylib"
install_name_tool -change "/Users/kgucwa/projects/librs/deps/osg3.4.0/build/lib/libosgUtil.130.dylib" "$INPATH/libosgUtil.130.dylib" "$PKGDIR/bin/libosgViewer.130.dylib"

# change links for osgPlugins
install_name_tool -change "/Users/kgucwa/projects/librs/deps/osg3.4.0/build/lib/libOpenThreads.20.dylib" "$INPATH/libOpenThreads.20.dylib" "$PKGDIR/bin/osgPlugins-3.4.0/osgdb_3ds.so"
install_name_tool -change "/Users/kgucwa/projects/librs/deps/osg3.4.0/build/lib/libosg.130.dylib" "$INPATH/libosg.130.dylib" "$PKGDIR/bin/osgPlugins-3.4.0/osgdb_3ds.so"
install_name_tool -change "/Users/kgucwa/projects/librs/deps/osg3.4.0/build/lib/libosgDB.130.dylib" "$INPATH/libosgDB.130.dylib" "$PKGDIR/bin/osgPlugins-3.4.0/osgdb_3ds.so"
install_name_tool -change "/Users/kgucwa/projects/librs/deps/osg3.4.0/build/lib/libosgUtil.130.dylib" "$INPATH/libosgUtil.130.dylib" "$PKGDIR/bin/osgPlugins-3.4.0/osgdb_3ds.so"
install_name_tool -change "/Users/kgucwa/projects/librs/deps/osg3.4.0/build/lib/libOpenThreads.20.dylib" "$INPATH/libOpenThreads.20.dylib" "$PKGDIR/bin/osgPlugins-3.4.0/osgdb_imageio.so"
install_name_tool -change "/Users/kgucwa/projects/librs/deps/osg3.4.0/build/lib/libosg.130.dylib" "$INPATH/libosg.130.dylib" "$PKGDIR/bin/osgPlugins-3.4.0/osgdb_imageio.so"
install_name_tool -change "/Users/kgucwa/projects/librs/deps/osg3.4.0/build/lib/libosgDB.130.dylib" "$INPATH/libosgDB.130.dylib" "$PKGDIR/bin/osgPlugins-3.4.0/osgdb_imageio.so"
install_name_tool -change "/Users/kgucwa/projects/librs/deps/osg3.4.0/build/lib/libosgUtil.130.dylib" "$INPATH/libosgUtil.130.dylib" "$PKGDIR/bin/osgPlugins-3.4.0/osgdb_imageio.so"

# sign app
sudo codesign -f -s "Developer ID Application: CSTEM UCD" "$PKGDIR/bin/rssceneapp"

# zip
zip -rq $PACKAGE-$VERSION.zip $PACKAGE-$VERSION

# done
echo "Done Building $PACKAGE-$VERSION"

