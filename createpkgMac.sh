#!/bin/sh

PACKAGE=chrobosim
VERSION=osx-1.9.90
PKGDIR=$PACKAGE-$VERSION/$PACKAGE

ROOT=".."
LIBRSPATH="../../librs"
RSPATH="../../RoboSim"
QTPATH="/Users/kgucwa/Qt/5.7/clang_64"

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
cp "$LIBRSPATH/build/lib/librs.dylib" $PKGDIR/bin
cp "$LIBRSPATH/build/lib/librsCommunication.dylib" $PKGDIR/bin
cp "$LIBRSPATH/build/lib/librsRobots.dylib" $PKGDIR/bin
cp "$LIBRSPATH/build/lib/librsScene.dylib" $PKGDIR/bin
cp "$LIBRSPATH/build/lib/librsSim.dylib" $PKGDIR/bin
cp "$LIBRSPATH/build/lib/librsXML.dylib" $PKGDIR/bin
cp "$LIBRSPATH/build/src/rsScene/main" $PKGDIR/bin
cp "$LIBRSPATH/deps/ode/sys/lib/libode.1.dylib" $PKGDIR/bin
cp "$LIBRSPATH/deps/osg3.4.0/build/lib/libosg.130.dylib" $PKGDIR/bin
cp "$LIBRSPATH/deps/osg3.4.0/build/lib/libosgDB.130.dylib" $PKGDIR/bin
cp "$LIBRSPATH/deps/osg3.4.0/build/lib/libosgFX.130.dylib" $PKGDIR/bin
cp "$LIBRSPATH/deps/osg3.4.0/build/lib/libosgGA.130.dylib" $PKGDIR/bin
cp "$LIBRSPATH/deps/osg3.4.0/build/lib/libosgQt.130.dylib" $PKGDIR/bin
cp "$LIBRSPATH/deps/osg3.4.0/build/lib/libosgShadow.130.dylib" $PKGDIR/bin
cp "$LIBRSPATH/deps/osg3.4.0/build/lib/libosgText.130.dylib" $PKGDIR/bin
cp "$LIBRSPATH/deps/osg3.4.0/build/lib/libosgUtil.130.dylib" $PKGDIR/bin
cp "$LIBRSPATH/deps/osg3.4.0/build/lib/libosgViewer.130.dylib" $PKGDIR/bin
cp "$LIBRSPATH/deps/osg3.4.0/build/lib/libOpenThreads.20.dylib" $PKGDIR/bin
cp "$LIBRSPATH/deps/zeromq/sys/lib/libzmq.5.dylib" $PKGDIR/bin
mkdir $PKDIR/bin/RoboSim.app
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
cp -R "$LIBRSPATH/resources/linkbot" $PKGDIR/data
cp -R "$LIBRSPATH/resources/mindstorms" $PKGDIR/data
cp -R "$LIBRSPATH/resources/obstacles" $PKGDIR/data

# zip
zip -rq $PACKAGE-$VERSION.zip $PACKAGE-$VERSION

# done
echo "Done Building $PACKAGE-$VERSION"

