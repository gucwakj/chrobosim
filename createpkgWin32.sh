#!/bin/sh

PACKAGE=chrobosim
VERSION=win32-1.9.90
PKGDIR=$PACKAGE-$VERSION/$PACKAGE

ROOT=..
LIBRSPATH="../../librs"
RSPATH="../../RoboSim"
QTPATH="C:/Qt/5.6/msvc2013"

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
cp $LIBRSPATH/build/bin/rs.dll $PKGDIR/bin
cp $LIBRSPATH/build/bin/rsCallback.dll $PKGDIR/bin
cp $LIBRSPATH/build/bin/rsRobots.dll $PKGDIR/bin
cp $LIBRSPATH/build/bin/rsScene.dll $PKGDIR/bin
cp $LIBRSPATH/build/bin/rsSim.dll $PKGDIR/bin
cp $LIBRSPATH/build/bin/rsXML.dll $PKGDIR/bin
cp $LIBRSPATH/deps/ode/lib/Release/ode.dll $PKGDIR/bin
cp $LIBRSPATH/deps/osg3.4.0/build/bin/osg130-osg.dll $PKGDIR/bin
cp $LIBRSPATH/deps/osg3.4.0/build/bin/osg130-osgDB.dll $PKGDIR/bin
cp $LIBRSPATH/deps/osg3.4.0/build/bin/osg130-osgFX.dll $PKGDIR/bin
cp $LIBRSPATH/deps/osg3.4.0/build/bin/osg130-osgGA.dll $PKGDIR/bin
cp $LIBRSPATH/deps/osg3.4.0/build/bin/osg130-osgQt.dll $PKGDIR/bin
cp $LIBRSPATH/deps/osg3.4.0/build/bin/osg130-osgShadow.dll $PKGDIR/bin
cp $LIBRSPATH/deps/osg3.4.0/build/bin/osg130-osgText.dll $PKGDIR/bin
cp $LIBRSPATH/deps/osg3.4.0/build/bin/osg130-osgUtil.dll $PKGDIR/bin
cp $LIBRSPATH/deps/osg3.4.0/build/bin/osg130-osgViewer.dll $PKGDIR/bin
cp $LIBRSPATH/deps/osg3.4.0/build/bin/ot20-OpenThreads.dll $PKGDIR/bin
mkdir $PKGDIR/bin/osgPlugins-3.4.0
cp $LIBRSPATH/deps/osg3.4.0/build/bin/osgPlugins-3.4.0/osgdb_png.dll $PKGDIR/bin/osgPlugins-3.4.0
cp $LIBRSPATH/deps/osg3.4.0/build/bin/osgPlugins-3.4.0/osgdb_3ds.dll $PKGDIR/bin/osgPlugins-3.4.0
cp $LIBRSPATH/deps/osg3.4.0/3rd_party/x86/bin/libpng16.dll $PKGDIR/bin
cp $LIBRSPATH/deps/osg3.4.0/3rd_party/x86/bin/zlib.dll $PKGDIR/bin
cp $RSPATH/build/bin/robosimwidget.dll $PKGDIR/bin
cp $RSPATH/build/bin/RoboSim.exe $PKGDIR/bin
cp $RSPATH/qt.conf $PKGDIR/bin
cp -R $RSPATH/icons $PKGDIR/bin
cp $QTPATH/bin/Qt5Core.dll $PKGDIR/bin
cp $QTPATH/bin/Qt5Gui.dll $PKGDIR/bin
cp $QTPATH/bin/Qt5OpenGL.dll $PKGDIR/bin
cp $QTPATH/bin/Qt5Widgets.dll $PKGDIR/bin
cp $QTPATH/bin/icudt54.dll $PKGDIR/bin
cp $QTPATH/bin/icuin54.dll $PKGDIR/bin
cp $QTPATH/bin/icuuc54.dll $PKGDIR/bin
cp "$QTPATH/bin/libEGL.dll" $PKGDIR/bin
cp "$QTPATH/bin/libGLESv2.dll" $PKGDIR/bin
cp "$QTPATH/bin/d3dcompiler_47.dll" $PKGDIR/bin
cp "$QTPATH/bin/opengl32sw.dll" $PKGDIR/bin
mkdir -p $PKGDIR/bin/plugins/platforms
cp $QTPATH/plugins/platforms/qwindows.dll $PKGDIR/bin/plugins/platforms
mkdir -p $PKGDIR/bin/plugins/imageformats
cp $QTPATH/plugins/imageformats/qico.dll $PKGDIR/bin/plugins/imageformats
cp $PKGDIR/dl/Microsoft.VC120.CRT/msvcr120.dll $PKGDIR/bin
cp $PKGDIR/dl/Microsoft.VC120.CRT/msvcp120.dll $PKGDIR/bin
mkdir $PKGDIR/docs
cp $RSPATH/docs/robosim.pdf $PKGDIR/docs
cp $RSPATH/docs/pictures/robosim.png $PKGDIR/docs
mkdir $PKGDIR/data
cp -R $LIBRSPATH/resources/background $PKGDIR/data
cp -R $LIBRSPATH/resources/challenges $PKGDIR/data
cp -R $LIBRSPATH/resources/linkbot $PKGDIR/data
cp -R $LIBRSPATH/resources/mindstorms $PKGDIR/data
cp -R $LIBRSPATH/resources/obstacles $PKGDIR/data
cp $ROOT/Makefile $PACKAGE-$VERSION
cp $ROOT/pkginstall.ch $PACKAGE-$VERSION

zip -rq $PACKAGE-$VERSION.zip $PACKAGE-$VERSION
echo Done Building $PACKAGE-$VERSION
