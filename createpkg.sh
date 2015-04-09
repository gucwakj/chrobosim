#!/bin/sh

PACKAGE=chrobosim
VERSION=0.1
PKGDIR=$PACKAGE-$VERSION/$PACKAGE
ROOT=..

echo Building $PACKAGE-$VERSION.zip ...
rm -rf $PACKAGE-$VERSION
rm -rf $PACKAGE-$VERSION.zip
mkdir -p $PKGDIR
cp $ROOT/COPYRIGHT $PKGDIR
cp $ROOT/CHANGELOG $PKGDIR
#mkdir $PKGDIR/demos
mkdir $PKGDIR/lib
#cp $ROOT/src/chf/robotgroup.chf $PKGDIR/lib
cp $ROOT/src/chf/delay.chf $PKGDIR/lib
cp $ROOT/src/chf/systemTime.chf $PKGDIR/lib
cp $ROOT/src/chf/clinkboti.chf $PKGDIR/lib
cp $ROOT/src/chf/clinkbotl.chf $PKGDIR/lib
mkdir $PKGDIR/dl
cp $ROOT/build/librobosim.dl $PKGDIR/dl
mkdir $PKGDIR/include
cp $ROOT/include/linkbot.h $PKGDIR/include
cp $ROOT/include/robot.h $PKGDIR/include
#mkdir $PKGDIR/docs
#cp ../../docs/robosim.pdf $(PKGDIR)/docs
#cp ../../docs/images/robosim.png $(PKGDIR)/docs
mkdir $PKGDIR/so
cp ../../librs/deps/ode/sys/lib/libode.so.1 $PKGDIR/so
cp ../../librs/deps/osg/build/lib/libosg.so.100 $PKGDIR/so
cp ../../librs/deps/osg/build/lib/libosgDB.so.100 $PKGDIR/so
cp ../../librs/deps/osg/build/lib/libosgGA.so.100 $PKGDIR/so
cp ../../librs/deps/osg/build/lib/libosgShadow.so.100 $PKGDIR/so
cp ../../librs/deps/osg/build/lib/libosgText.so.100 $PKGDIR/so
cp ../../librs/deps/osg/build/lib/libosgUtil.so.100 $PKGDIR/so
cp ../../librs/deps/osg/build/lib/libosgViewer.so.100 $PKGDIR/so
cp ../../librs/deps/osg/build/lib/libOpenThreads.so.13 $PKGDIR/so
cp ../../librs/deps/tinyxml2/build/libtinyxml2.so.1 $PKGDIR/so
mkdir -p $PKGDIR/so/osgPlugins-3.2.0
cp ../../librs/deps/osg/build/lib/osgPlugins-3.2.0/osgdb_png.so $PKGDIR/so/osgPlugins-3.2.0

#cp $ROOT/Makefile $PACKAGE-$VERSION
cp $ROOT/pkginstall.ch $PACKAGE-$VERSION
zip -rq $PACKAGE-$VERSION.zip $PACKAGE-$VERSION

