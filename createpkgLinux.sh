#!/bin/sh

PACKAGE=chrobosim
VERSION=unix-1.9.90
PKGDIR=$PACKAGE-$VERSION/$PACKAGE

ROOT=".."
LIBRSPATH="../../librs"
RSPATH="../../RoboSim"
#QTPATH="/Users/kgucwa/Qt/5.7/clang_64"

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
mkdir $PKGDIR/so
cp "$LIBRSPATH/build/lib/librs.so" $PKGDIR/bin
cp "$LIBRSPATH/build/lib/librsCallback.so" $PKGDIR/bin
cp "$LIBRSPATH/build/lib/librsRobots.so" $PKGDIR/bin
cp "$LIBRSPATH/build/lib/librsScene.so" $PKGDIR/bin
cp "$LIBRSPATH/build/lib/librsSim.so" $PKGDIR/bin
cp "$LIBRSPATH/build/lib/librsXML.so" $PKGDIR/bin
cp "$LIBRSPATH/deps/ode/sys/lib/libode.so.1" $PKGDIR/bin
cp "$LIBRSPATH/deps/osg3.4.0/build/lib/libosg.so.130" $PKGDIR/bin
cp "$LIBRSPATH/deps/osg3.4.0/build/lib/libosgDB.so.130" $PKGDIR/bin
cp "$LIBRSPATH/deps/osg3.4.0/build/lib/libosgFX.so.130" $PKGDIR/bin
cp "$LIBRSPATH/deps/osg3.4.0/build/lib/libosgGA.so.130" $PKGDIR/bin
cp "$LIBRSPATH/deps/osg3.4.0/build/lib/libosgQt.so.130" $PKGDIR/bin
cp "$LIBRSPATH/deps/osg3.4.0/build/lib/libosgShadow.so.130" $PKGDIR/bin
cp "$LIBRSPATH/deps/osg3.4.0/build/lib/libosgText.so.130" $PKGDIR/bin
cp "$LIBRSPATH/deps/osg3.4.0/build/lib/libosgUtil.so.130" $PKGDIR/bin
cp "$LIBRSPATH/deps/osg3.4.0/build/lib/libosgViewer.so.130" $PKGDIR/bin
cp "$LIBRSPATH/deps/osg3.4.0/build/lib/libOpenThreads.so.20" $PKGDIR/bin
mkdir "$PKGDIR/bin/osgPlugins-3.4.0"
cp "$LIBRSPATH/deps/osg3.4.0/build/lib/osgPlugins-3.4.0/osgdb_png.so" "$PKGDIR/bin/osgPlugins-3.4.0"
cp "$LIBRSPATH/deps/osg3.4.0/build/lib/osgPlugins-3.4.0/osgdb_3ds.so" "$PKGDIR/bin/osgPlugins-3.4.0"
mkdir "$PKGDIR/bin"
cp "$RSPATH/build/bin/librobosimwidget.so" $PKGDIR/bin
cp "$RSPATH/build/bin/RoboSim" $PKGDIR/bin
cp -R "$RSPATH/icons" $PKGDIR/bin
cp "$RSPATH/qt.conf" $PKGDIR/bin
cp -R $PKGDIR/so/* $PKGDIR/bin

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

# zip
zip -rq $PACKAGE-$VERSION.zip $PACKAGE-$VERSION

# done
echo "Done Building $PACKAGE-$VERSION"

