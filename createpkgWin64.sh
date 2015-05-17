#!/bin/sh

PACKAGE=chrobosim
VERSION=win64-1.9.90
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
cp $ROOT/build/Release/robosim.dl $PKGDIR/dl
cp -R C:/Ch/dl/Mi* $PKGDIR/dl
mkdir $PKGDIR/include
cp $ROOT/include/linkbot.h $PKGDIR/include
cp $ROOT/include/mindstorms.h $PKGDIR/include
cp $ROOT/include/robot.h $PKGDIR/include
cp $ROOT/include/macros.h $PKGDIR/include
mkdir $PKGDIR/bin
cp $ROOT/../librs/deps/ode/lib/Release/ode.dll $PKGDIR/bin
cp $ROOT/../librs/deps/osg/build/bin/osg100-osg.dll $PKGDIR/bin
cp $ROOT/../librs/deps/osg/build/bin/osg100-osgDB.dll $PKGDIR/bin
cp $ROOT/../librs/deps/osg/build/bin/osg100-osgFX.dll $PKGDIR/bin
cp $ROOT/../librs/deps/osg/build/bin/osg100-osgGA.dll $PKGDIR/bin
cp $ROOT/../librs/deps/osg/build/bin/osg100-osgShadow.dll $PKGDIR/bin
cp $ROOT/../librs/deps/osg/build/bin/osg100-osgText.dll $PKGDIR/bin
cp $ROOT/../librs/deps/osg/build/bin/osg100-osgUtil.dll $PKGDIR/bin
cp $ROOT/../librs/deps/osg/build/bin/osg100-osgViewer.dll $PKGDIR/bin
cp $ROOT/../librs/deps/osg/build/bin/ot13-OpenThreads.dll $PKGDIR/bin
cp $ROOT/../librs/deps/osg/third_party/x64/bin/glut32.dll $PKGDIR/bin
cp $ROOT/../librs/deps/osg/third_party/x64/bin/libpng13.dll $PKGDIR/bin
cp $ROOT/../librs/deps/osg/third_party/x64/bin/zlib1.dll $PKGDIR/bin
mkdir $PKGDIR/bin/osgPlugins-3.2.0
cp $ROOT/../librs/deps/osg/build/bin/osgPlugins-3.2.0/osgdb_png.dll $PKGDIR/bin/osgPlugins-3.2.0
cp $ROOT/../librs/deps/osg/build/bin/osgPlugins-3.2.0/osgdb_3ds.dll $PKGDIR/bin/osgPlugins-3.2.0
#mkdir $PKGDIR/docs
#cp ../../docs/robosim.pdf $PKGDIR/docs
#cp ../../docs/images/robosim.png $PKGDIR/docs
mkdir $PKGDIR/data
cp -R $ROOT/../librs/resources/background $PKGDIR/data
cp -R $ROOT/../librs/resources/linkbot $PKGDIR/data
cp -R $ROOT/../librs/resources/mindstorms $PKGDIR/data

#cp $ROOT/Makefile $PACKAGE-$VERSION
cp $ROOT/pkginstall.ch $PACKAGE-$VERSION
zip -rq $PACKAGE-$VERSION.zip $PACKAGE-$VERSION
echo Done Building $PACKAGE-$VERSION
