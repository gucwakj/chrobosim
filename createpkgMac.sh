#!/bin/sh

PACKAGE=chrobosim
VERSION=osx-1.9.90
PKGDIR=$PACKAGE-$VERSION/$PACKAGE
ROOT=..

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
cp $ROOT/build/librobosim.dl $PKGDIR/dl

# headers
mkdir $PKGDIR/include
cp $ROOT/include/linkbot.h $PKGDIR/include
cp $ROOT/include/mindstorms.h $PKGDIR/include
cp $ROOT/include/robosim.h $PKGDIR/include
cp $ROOT/include/macros.h $PKGDIR/include

# binaries
mkdir $PKGDIR/bin
cp $ROOT/../RoboSim/build/bin/librobosimwidget.dylib $PKGDIR/bin
cp $ROOT/../RoboSim/build/bin/RoboSim $PKGDIR/bin
cp $ROOT/../RoboSim/qt.conf $PKGDIR/bin
cp -R $ROOT/../RoboSim/icons $PKGDIR/bin
cp "$ROOT/../librs/build/lib/librs.dylib" $PKGDIR/bin
cp "$ROOT/../librs/build/lib/librsCommunication.dylib" $PKGDIR/bin
cp "$ROOT/../librs/build/lib/librsRobots.dylib" $PKGDIR/bin
cp "$ROOT/../librs/build/lib/librsScene.dylib" $PKGDIR/bin
cp "$ROOT/../librs/build/lib/librsSim.dylib" $PKGDIR/bin
cp "$ROOT/../librs/build/lib/librsXML.dylib" $PKGDIR/bin
cp "$ROOT/../librs/deps/ode/sys/lib/libode.1.dylib" $PKGDIR/bin
cp "$ROOT/../librs/deps/osg3.4.0/build/lib/libosg.130.dylib" $PKGDIR/bin
cp "$ROOT/../librs/deps/osg3.4.0/build/lib/libosgDB.130.dylib" $PKGDIR/bin
cp "$ROOT/../librs/deps/osg3.4.0/build/lib/libosgFX.130.dylib" $PKGDIR/bin
cp "$ROOT/../librs/deps/osg3.4.0/build/lib/libosgGA.130.dylib" $PKGDIR/bin
cp "$ROOT/../librs/deps/osg3.4.0/build/lib/libosgQt.130.dylib" $PKGDIR/bin
cp "$ROOT/../librs/deps/osg3.4.0/build/lib/libosgShadow.130.dylib" $PKGDIR/bin
cp "$ROOT/../librs/deps/osg3.4.0/build/lib/libosgText.130.dylib" $PKGDIR/bin
cp "$ROOT/../librs/deps/osg3.4.0/build/lib/libosgUtil.130.dylib" $PKGDIR/bin
cp "$ROOT/../librs/deps/osg3.4.0/build/lib/libosgViewer.130.dylib" $PKGDIR/bin
cp "$ROOT/../librs/deps/osg3.4.0/build/lib/libOpenThreads.20.dylib" $PKGDIR/bin

# docs
mkdir $PKGDIR/docs
cp $ROOT/../RoboSim/docs/robosim.pdf $PKGDIR/docs
cp $ROOT/../RoboSim/docs/pictures/robosim.png $PKGDIR/docs

# demos
mkdir $PKGDIR/demos
cp -R $ROOT/demos/ $PKGDIR/demos

# resources
mkdir $PKGDIR/data
cp -R $ROOT/../librs/resources/background $PKGDIR/data
cp -R $ROOT/../librs/resources/linkbot $PKGDIR/data
cp -R $ROOT/../librs/resources/mindstorms $PKGDIR/data
cp -R $ROOT/../librs/resources/obstacles $PKGDIR/data

# zip
zip -rq $PACKAGE-$VERSION.zip $PACKAGE-$VERSION

# done
echo "Done Building $PACKAGE-$VERSION"

