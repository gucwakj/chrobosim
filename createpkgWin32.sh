#!/bin/sh

PACKAGE=chrobosim
VERSION=win32-1.9.90
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
cp -R "C:/Program Files/Microsoft Visual Studio 12.0/VC/redist/x86/Microsoft.VC120.CRT" $PKGDIR/dl
mkdir $PKGDIR/include
cp $ROOT/include/linkbot.h $PKGDIR/include
cp $ROOT/include/mindstorms.h $PKGDIR/include
cp $ROOT/include/robosim.h $PKGDIR/include
cp $ROOT/include/macros.h $PKGDIR/include
mkdir $PKGDIR/bin
cp $ROOT/../librs/build/bin/rs.dll $PKGDIR/bin
cp $ROOT/../librs/build/bin/rsRobots.dll $PKGDIR/bin
cp $ROOT/../librs/build/bin/rsScene.dll $PKGDIR/bin
cp $ROOT/../librs/build/bin/rsSim.dll $PKGDIR/bin
cp $ROOT/../librs/build/bin/rsCallback.dll $PKGDIR/bin
cp $ROOT/../librs/build/bin/rsXML.dll $PKGDIR/bin
cp $ROOT/../librs/deps/ode/lib/Release/ode.dll $PKGDIR/bin
cp $ROOT/../librs/deps/osg3.4.0/build/bin/osg130-osg.dll $PKGDIR/bin
cp $ROOT/../librs/deps/osg3.4.0/build/bin/osg130-osgDB.dll $PKGDIR/bin
cp $ROOT/../librs/deps/osg3.4.0/build/bin/osg130-osgFX.dll $PKGDIR/bin
cp $ROOT/../librs/deps/osg3.4.0/build/bin/osg130-osgGA.dll $PKGDIR/bin
cp $ROOT/../librs/deps/osg3.4.0/build/bin/osg130-osgQt.dll $PKGDIR/bin
cp $ROOT/../librs/deps/osg3.4.0/build/bin/osg130-osgShadow.dll $PKGDIR/bin
cp $ROOT/../librs/deps/osg3.4.0/build/bin/osg130-osgText.dll $PKGDIR/bin
cp $ROOT/../librs/deps/osg3.4.0/build/bin/osg130-osgUtil.dll $PKGDIR/bin
cp $ROOT/../librs/deps/osg3.4.0/build/bin/osg130-osgViewer.dll $PKGDIR/bin
cp $ROOT/../librs/deps/osg3.4.0/build/bin/ot20-OpenThreads.dll $PKGDIR/bin
mkdir $PKGDIR/bin/osgPlugins-3.4.0
cp $ROOT/../librs/deps/osg3.4.0/build/bin/osgPlugins-3.4.0/osgdb_png.dll $PKGDIR/bin/osgPlugins-3.4.0
cp $ROOT/../librs/deps/osg3.4.0/build/bin/osgPlugins-3.4.0/osgdb_3ds.dll $PKGDIR/bin/osgPlugins-3.4.0
cp $ROOT/../librs/deps/osg3.4.0/3rd_party/x86/bin/libpng16.dll $PKGDIR/bin
cp $ROOT/../librs/deps/osg3.4.0/3rd_party/x86/bin/zlib.dll $PKGDIR/bin
cp $ROOT/../RoboSim/build/bin/robosimwidget.dll $PKGDIR/bin
cp $ROOT/../RoboSim/build/bin/RoboSim.exe $PKGDIR/bin
cp $ROOT/../RoboSim/qt.conf $PKGDIR/bin
cp -R $ROOT/../RoboSim/icons $PKGDIR/bin
cp "C:/Program Files/Qt/5.5/msvc2013/bin/Qt5Core.dll" $PKGDIR/bin
cp "C:/Program Files/Qt/5.5/msvc2013/bin/Qt5Gui.dll" $PKGDIR/bin
cp "C:/Program Files/Qt/5.5/msvc2013/bin/Qt5OpenGL.dll" $PKGDIR/bin
cp "C:/Program Files/Qt/5.5/msvc2013/bin/Qt5Widgets.dll" $PKGDIR/bin
cp "C:/Program Files/Qt/5.5/msvc2013/bin/icudt54.dll" $PKGDIR/bin
cp "C:/Program Files/Qt/5.5/msvc2013/bin/icuin54.dll" $PKGDIR/bin
cp "C:/Program Files/Qt/5.5/msvc2013/bin/icuuc54.dll" $PKGDIR/bin
mkdir -p $PKGDIR/bin/plugins/platforms
cp "C:/Program Files/Qt/5.5/msvc2013/plugins/platforms/qwindows.dll" $PKGDIR/bin/plugins/platforms
mkdir -p $PKGDIR/bin/plugins/imageformats
cp "C:/Program Files/Qt/5.5/msvc2013/plugins/imageformats/qico.dll" $PKGDIR/bin/plugins/imageformats
cp $PKGDIR/dl/Microsoft.VC120.CRT/msvcr120.dll $PKGDIR/bin
cp $PKGDIR/dl/Microsoft.VC120.CRT/msvcp120.dll $PKGDIR/bin
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
