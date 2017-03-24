#!/bin/sh

PACKAGE=chrobosim
VERSION=unix-1.9.90
PKGDIR=$PACKAGE-$VERSION/$PACKAGE
ROOT=..

echo Building $PACKAGE-$VERSION.zip ...
rm -rf $PACKAGE-$VERSION
rm -rf $PACKAGE-$VERSION.zip
mkdir -p $PKGDIR
cp $ROOT/COPYRIGHT $PKGDIR
cp $ROOT/CHANGELOG $PKGDIR
mkdir $PKGDIR/lib
cp $ROOT/src/chf/delay.chf $PKGDIR/lib
cp $ROOT/src/chf/systemTime.chf $PKGDIR/lib
cp $ROOT/src/chf/clinkboti.chf $PKGDIR/lib
cp $ROOT/src/chf/clinkbotl.chf $PKGDIR/lib
cp $ROOT/src/chf/cmindstorms.chf $PKGDIR/lib
mkdir $PKGDIR/dl
cp $ROOT/build/librobosim.dl $PKGDIR/dl
mkdir $PKGDIR/include
cp $ROOT/include/linkbot.h $PKGDIR/include
cp $ROOT/include/mindstorms.h $PKGDIR/include
cp $ROOT/include/robosim.h $PKGDIR/include
cp $ROOT/include/macros.h $PKGDIR/include
mkdir $PKGDIR/so
cp $ROOT/../librs/build/lib/librs.so $PKGDIR/so
cp $ROOT/../librs/build/lib/librsCallback.so $PKGDIR/so
cp $ROOT/../librs/build/lib/librsRobots.so $PKGDIR/so
cp $ROOT/../librs/build/lib/librsScene.so $PKGDIR/so
cp $ROOT/../librs/build/lib/librsSim.so $PKGDIR/so
cp $ROOT/../librs/build/lib/librsXML.so $PKGDIR/so
cp $ROOT/../librs/deps/ode/sys/lib/libode.so.1 $PKGDIR/so
cp $ROOT/../librs/deps/osg3.4.0/build/lib/libosg.so.130 $PKGDIR/so
cp $ROOT/../librs/deps/osg3.4.0/build/lib/libosgDB.so.130 $PKGDIR/so
cp $ROOT/../librs/deps/osg3.4.0/build/lib/libosgFX.so.130 $PKGDIR/so
cp $ROOT/../librs/deps/osg3.4.0/build/lib/libosgGA.so.130 $PKGDIR/so
cp $ROOT/../librs/deps/osg3.4.0/build/lib/libosgQt.so.130 $PKGDIR/so
cp $ROOT/../librs/deps/osg3.4.0/build/lib/libosgShadow.so.130 $PKGDIR/so
cp $ROOT/../librs/deps/osg3.4.0/build/lib/libosgText.so.130 $PKGDIR/so
cp $ROOT/../librs/deps/osg3.4.0/build/lib/libosgUtil.so.130 $PKGDIR/so
cp $ROOT/../librs/deps/osg3.4.0/build/lib/libosgViewer.so.130 $PKGDIR/so
cp $ROOT/../librs/deps/osg3.4.0/build/lib/libOpenThreads.so.20 $PKGDIR/so
mkdir $PKGDIR/so/osgPlugins-3.4.0
cp $ROOT/../librs/deps/osg3.4.0/build/lib/osgPlugins-3.4.0/osgdb_png.so $PKGDIR/so/osgPlugins-3.4.0
cp $ROOT/../librs/deps/osg3.4.0/build/lib/osgPlugins-3.4.0/osgdb_3ds.so $PKGDIR/so/osgPlugins-3.4.0
mkdir $PKGDIR/bin
cp $ROOT/../RoboSim/build/bin/librobosimwidget.so $PKGDIR/bin
cp $ROOT/../RoboSim/build/bin/RoboSim $PKGDIR/bin
cp $ROOT/../RoboSim/qt.conf $PKGDIR/bin
cp -R $PKGDIR/so/* $PKGDIR/bin
cp -R $ROOT/../RoboSim/icons $PKGDIR/bin
mkdir $PKGDIR/docs
cp $ROOT/../RoboSim/docs/robosim.pdf $PKGDIR/docs
cp $ROOT/../RoboSim/docs/pictures/robosim.png $PKGDIR/docs
mkdir $PKGDIR/data
cp -R $ROOT/../librs/resources/background $PKGDIR/data
cp -R $ROOT/../librs/resources/challenges $PKGDIR/data
cp -R $ROOT/../librs/resources/linkbot $PKGDIR/data
cp -R $ROOT/../librs/resources/mindstorms $PKGDIR/data
cp -R $ROOT/../librs/resources/obstacles $PKGDIR/data
cp $ROOT/Makefile $PACKAGE-$VERSION
cp $ROOT/pkginstall.ch $PACKAGE-$VERSION

zip -rq $PACKAGE-$VERSION.zip $PACKAGE-$VERSION
echo Done Building $PACKAGE-$VERSION

