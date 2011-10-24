#############################################################################
# Makefile for building: dist/Debug/GNU-Linux-x86/SOURCE
# Generated by qmake (2.01a) (Qt 4.7.3) on: Tue Oct 25 00:36:45 2011
# Project:  nbproject/qt-Debug.pro
# Template: app
# Command: /home/Ira/QtSDK/Desktop/Qt/473/gcc/bin/qmake VPATH=. -o qttmp-Debug.mk nbproject/qt-Debug.pro
#############################################################################

####### Compiler, tools and options

CC            = gcc
CXX           = g++
DEFINES       = -DQT_GUI_LIB -DQT_CORE_LIB
CFLAGS        = -pipe -g -Wall -W -D_REENTRANT $(DEFINES)
CXXFLAGS      = -pipe -g -Wall -W -D_REENTRANT $(DEFINES)
INCPATH       = -I../../QtSDK/Desktop/Qt/473/gcc/mkspecs/default -Inbproject -I../../QtSDK/Desktop/Qt/473/gcc/include/QtCore -I../../QtSDK/Desktop/Qt/473/gcc/include/QtGui -I../../QtSDK/Desktop/Qt/473/gcc/include -I. -Inbproject -I.
LINK          = g++
LFLAGS        = -Wl,-rpath,/home/Ira/QtSDK/Desktop/Qt/473/gcc/lib
LIBS          = $(SUBLIBS)  -L/home/Ira/QtSDK/Desktop/Qt/473/gcc/lib -lQtGui -lQtCore -lpthread 
AR            = ar cqs
RANLIB        = 
QMAKE         = /home/Ira/QtSDK/Desktop/Qt/473/gcc/bin/qmake
TAR           = tar -cf
COMPRESS      = gzip -9f
COPY          = cp -f
SED           = sed
COPY_FILE     = $(COPY)
COPY_DIR      = $(COPY) -r
STRIP         = strip
INSTALL_FILE  = install -m 644 -p
INSTALL_DIR   = $(COPY_DIR)
INSTALL_PROGRAM = install -m 755 -p
DEL_FILE      = rm -f
SYMLINK       = ln -f -s
DEL_DIR       = rmdir
MOVE          = mv -f
CHK_DIR_EXISTS= test -d
MKDIR         = mkdir -p

####### Output directory

OBJECTS_DIR   = build/Debug/GNU-Linux-x86/

####### Files

SOURCES       = MainWindow.cpp \
		Connection.cpp \
		canio.cpp \
		cannet.cpp \
		main.cpp \
		msg.cpp \
		Receive.cpp \
		msgspv.cpp \
		Transmit.cpp \
		controller.cpp \
		MessageEditor.cpp moc_MessageEditor.cpp \
		moc_Receive.cpp \
		moc_Transmit.cpp \
		moc_Connection.cpp \
		moc_MainWindow.cpp
OBJECTS       = build/Debug/GNU-Linux-x86/MainWindow.o \
		build/Debug/GNU-Linux-x86/Connection.o \
		build/Debug/GNU-Linux-x86/canio.o \
		build/Debug/GNU-Linux-x86/cannet.o \
		build/Debug/GNU-Linux-x86/main.o \
		build/Debug/GNU-Linux-x86/msg.o \
		build/Debug/GNU-Linux-x86/Receive.o \
		build/Debug/GNU-Linux-x86/msgspv.o \
		build/Debug/GNU-Linux-x86/Transmit.o \
		build/Debug/GNU-Linux-x86/controller.o \
		build/Debug/GNU-Linux-x86/MessageEditor.o \
		build/Debug/GNU-Linux-x86/moc_MessageEditor.o \
		build/Debug/GNU-Linux-x86/moc_Receive.o \
		build/Debug/GNU-Linux-x86/moc_Transmit.o \
		build/Debug/GNU-Linux-x86/moc_Connection.o \
		build/Debug/GNU-Linux-x86/moc_MainWindow.o
DIST          = ../QtSDK/Desktop/Qt/473/gcc/mkspecs/common/g++.conf \
		../QtSDK/Desktop/Qt/473/gcc/mkspecs/common/unix.conf \
		../QtSDK/Desktop/Qt/473/gcc/mkspecs/common/linux.conf \
		../QtSDK/Desktop/Qt/473/gcc/mkspecs/qconfig.pri \
		../QtSDK/Desktop/Qt/473/gcc/mkspecs/modules/qt_webkit_version.pri \
		../QtSDK/Desktop/Qt/473/gcc/mkspecs/features/qt_functions.prf \
		../QtSDK/Desktop/Qt/473/gcc/mkspecs/features/qt_config.prf \
		../QtSDK/Desktop/Qt/473/gcc/mkspecs/features/exclusive_builds.prf \
		../QtSDK/Desktop/Qt/473/gcc/mkspecs/features/default_pre.prf \
		../QtSDK/Desktop/Qt/473/gcc/mkspecs/features/debug.prf \
		../QtSDK/Desktop/Qt/473/gcc/mkspecs/features/default_post.prf \
		../QtSDK/Desktop/Qt/473/gcc/mkspecs/features/warn_on.prf \
		../QtSDK/Desktop/Qt/473/gcc/mkspecs/features/qt.prf \
		../QtSDK/Desktop/Qt/473/gcc/mkspecs/features/unix/thread.prf \
		../QtSDK/Desktop/Qt/473/gcc/mkspecs/features/moc.prf \
		../QtSDK/Desktop/Qt/473/gcc/mkspecs/features/resources.prf \
		../QtSDK/Desktop/Qt/473/gcc/mkspecs/features/uic.prf \
		../QtSDK/Desktop/Qt/473/gcc/mkspecs/features/yacc.prf \
		../QtSDK/Desktop/Qt/473/gcc/mkspecs/features/lex.prf \
		../QtSDK/Desktop/Qt/473/gcc/mkspecs/features/include_source_dir.prf \
		nbproject/qt-Debug.pro
QMAKE_TARGET  = SOURCE
DESTDIR       = dist/Debug/GNU-Linux-x86/
TARGET        = dist/Debug/GNU-Linux-x86/SOURCE

first: all
####### Implicit rules

.SUFFIXES: .o .c .cpp .cc .cxx .C

.cpp.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.cc.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.cxx.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.C.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.c.o:
	$(CC) -c $(CFLAGS) $(INCPATH) -o "$@" "$<"

####### Build rules

all: qttmp-Debug.mk $(TARGET)

$(TARGET):  $(OBJECTS)  
	@$(CHK_DIR_EXISTS) dist/Debug/GNU-Linux-x86/ || $(MKDIR) dist/Debug/GNU-Linux-x86/ 
	$(LINK) $(LFLAGS) -o $(TARGET) $(OBJECTS) $(OBJCOMP) $(LIBS)

qttmp-Debug.mk: nbproject/qt-Debug.pro  ../../QtSDK/Desktop/Qt/473/gcc/mkspecs/common/g++.conf \
		../../QtSDK/Desktop/Qt/473/gcc/mkspecs/common/unix.conf \
		../../QtSDK/Desktop/Qt/473/gcc/mkspecs/common/linux.conf \
		../../QtSDK/Desktop/Qt/473/gcc/mkspecs/qconfig.pri \
		../../QtSDK/Desktop/Qt/473/gcc/mkspecs/modules/qt_webkit_version.pri \
		../../QtSDK/Desktop/Qt/473/gcc/mkspecs/features/qt_functions.prf \
		../../QtSDK/Desktop/Qt/473/gcc/mkspecs/features/qt_config.prf \
		../../QtSDK/Desktop/Qt/473/gcc/mkspecs/features/exclusive_builds.prf \
		../../QtSDK/Desktop/Qt/473/gcc/mkspecs/features/default_pre.prf \
		../../QtSDK/Desktop/Qt/473/gcc/mkspecs/features/debug.prf \
		../../QtSDK/Desktop/Qt/473/gcc/mkspecs/features/default_post.prf \
		../../QtSDK/Desktop/Qt/473/gcc/mkspecs/features/warn_on.prf \
		../../QtSDK/Desktop/Qt/473/gcc/mkspecs/features/qt.prf \
		../../QtSDK/Desktop/Qt/473/gcc/mkspecs/features/unix/thread.prf \
		../../QtSDK/Desktop/Qt/473/gcc/mkspecs/features/moc.prf \
		../../QtSDK/Desktop/Qt/473/gcc/mkspecs/features/resources.prf \
		../../QtSDK/Desktop/Qt/473/gcc/mkspecs/features/uic.prf \
		../../QtSDK/Desktop/Qt/473/gcc/mkspecs/features/yacc.prf \
		../../QtSDK/Desktop/Qt/473/gcc/mkspecs/features/lex.prf \
		../../QtSDK/Desktop/Qt/473/gcc/mkspecs/features/include_source_dir.prf
	$(QMAKE) VPATH=. -o qttmp-Debug.mk nbproject/qt-Debug.pro
../../QtSDK/Desktop/Qt/473/gcc/mkspecs/common/g++.conf:
../../QtSDK/Desktop/Qt/473/gcc/mkspecs/common/unix.conf:
../../QtSDK/Desktop/Qt/473/gcc/mkspecs/common/linux.conf:
../../QtSDK/Desktop/Qt/473/gcc/mkspecs/qconfig.pri:
../../QtSDK/Desktop/Qt/473/gcc/mkspecs/modules/qt_webkit_version.pri:
../../QtSDK/Desktop/Qt/473/gcc/mkspecs/features/qt_functions.prf:
../../QtSDK/Desktop/Qt/473/gcc/mkspecs/features/qt_config.prf:
../../QtSDK/Desktop/Qt/473/gcc/mkspecs/features/exclusive_builds.prf:
../../QtSDK/Desktop/Qt/473/gcc/mkspecs/features/default_pre.prf:
../../QtSDK/Desktop/Qt/473/gcc/mkspecs/features/debug.prf:
../../QtSDK/Desktop/Qt/473/gcc/mkspecs/features/default_post.prf:
../../QtSDK/Desktop/Qt/473/gcc/mkspecs/features/warn_on.prf:
../../QtSDK/Desktop/Qt/473/gcc/mkspecs/features/qt.prf:
../../QtSDK/Desktop/Qt/473/gcc/mkspecs/features/unix/thread.prf:
../../QtSDK/Desktop/Qt/473/gcc/mkspecs/features/moc.prf:
../../QtSDK/Desktop/Qt/473/gcc/mkspecs/features/resources.prf:
../../QtSDK/Desktop/Qt/473/gcc/mkspecs/features/uic.prf:
../../QtSDK/Desktop/Qt/473/gcc/mkspecs/features/yacc.prf:
../../QtSDK/Desktop/Qt/473/gcc/mkspecs/features/lex.prf:
../../QtSDK/Desktop/Qt/473/gcc/mkspecs/features/include_source_dir.prf:
qmake:  FORCE
	@$(QMAKE) VPATH=. -o qttmp-Debug.mk nbproject/qt-Debug.pro

dist: 
	@$(CHK_DIR_EXISTS) nbproject/build/Debug/GNU-Linux-x86/SOURCE1.0.0 || $(MKDIR) nbproject/build/Debug/GNU-Linux-x86/SOURCE1.0.0 
	$(COPY_FILE) --parents $(SOURCES) $(DIST) nbproject/build/Debug/GNU-Linux-x86/SOURCE1.0.0/ && $(COPY_FILE) --parents sferror.h controller.h MessageEditor.h Receive.h Transmit.h cannet.h msg.h Connection.h msgspv.h canlistener.h MainWindow.h canio.h nbproject/build/Debug/GNU-Linux-x86/SOURCE1.0.0/ && $(COPY_FILE) --parents MainWindow.cpp Connection.cpp canio.cpp cannet.cpp main.cpp msg.cpp Receive.cpp msgspv.cpp Transmit.cpp controller.cpp MessageEditor.cpp nbproject/build/Debug/GNU-Linux-x86/SOURCE1.0.0/ && (cd `dirname nbproject/build/Debug/GNU-Linux-x86/SOURCE1.0.0` && $(TAR) SOURCE1.0.0.tar SOURCE1.0.0 && $(COMPRESS) SOURCE1.0.0.tar) && $(MOVE) `dirname nbproject/build/Debug/GNU-Linux-x86/SOURCE1.0.0`/SOURCE1.0.0.tar.gz . && $(DEL_FILE) -r nbproject/build/Debug/GNU-Linux-x86/SOURCE1.0.0


clean:compiler_clean 
	-$(DEL_FILE) $(OBJECTS)
	-$(DEL_FILE) *~ core *.core


####### Sub-libraries

distclean: clean
	-$(DEL_FILE) $(TARGET) 
	-$(DEL_FILE) qttmp-Debug.mk


check: first

mocclean: compiler_moc_header_clean compiler_moc_source_clean

mocables: compiler_moc_header_make_all compiler_moc_source_make_all

compiler_moc_header_make_all: moc_MessageEditor.cpp moc_Receive.cpp moc_Transmit.cpp moc_Connection.cpp moc_MainWindow.cpp
compiler_moc_header_clean:
	-$(DEL_FILE) moc_MessageEditor.cpp moc_Receive.cpp moc_Transmit.cpp moc_Connection.cpp moc_MainWindow.cpp
moc_MessageEditor.cpp: controller.h \
		canio.h \
		msg.h \
		sferror.h \
		cannet.h \
		canlistener.h \
		MessageEditor.h
	/home/Ira/QtSDK/Desktop/Qt/473/gcc/bin/moc $(DEFINES) $(INCPATH) MessageEditor.h -o moc_MessageEditor.cpp

moc_Receive.cpp: MessageEditor.h \
		controller.h \
		canio.h \
		msg.h \
		sferror.h \
		cannet.h \
		canlistener.h \
		Receive.h
	/home/Ira/QtSDK/Desktop/Qt/473/gcc/bin/moc $(DEFINES) $(INCPATH) Receive.h -o moc_Receive.cpp

moc_Transmit.cpp: MessageEditor.h \
		controller.h \
		canio.h \
		msg.h \
		sferror.h \
		cannet.h \
		canlistener.h \
		Transmit.h
	/home/Ira/QtSDK/Desktop/Qt/473/gcc/bin/moc $(DEFINES) $(INCPATH) Transmit.h -o moc_Transmit.cpp

moc_Connection.cpp: canlistener.h \
		msg.h \
		sferror.h \
		Connection.h
	/home/Ira/QtSDK/Desktop/Qt/473/gcc/bin/moc $(DEFINES) $(INCPATH) Connection.h -o moc_Connection.cpp

moc_MainWindow.cpp: MessageEditor.h \
		controller.h \
		canio.h \
		msg.h \
		sferror.h \
		cannet.h \
		canlistener.h \
		Transmit.h \
		Receive.h \
		Connection.h \
		MainWindow.h
	/home/Ira/QtSDK/Desktop/Qt/473/gcc/bin/moc $(DEFINES) $(INCPATH) MainWindow.h -o moc_MainWindow.cpp

compiler_rcc_make_all:
compiler_rcc_clean:
compiler_image_collection_make_all: qmake_image_collection.cpp
compiler_image_collection_clean:
	-$(DEL_FILE) qmake_image_collection.cpp
compiler_moc_source_make_all:
compiler_moc_source_clean:
compiler_uic_make_all:
compiler_uic_clean:
compiler_yacc_decl_make_all:
compiler_yacc_decl_clean:
compiler_yacc_impl_make_all:
compiler_yacc_impl_clean:
compiler_lex_make_all:
compiler_lex_clean:
compiler_clean: compiler_moc_header_clean 

####### Compile

build/Debug/GNU-Linux-x86/MainWindow.o: MainWindow.cpp MainWindow.h \
		MessageEditor.h \
		controller.h \
		canio.h \
		msg.h \
		sferror.h \
		cannet.h \
		canlistener.h \
		Transmit.h \
		Receive.h \
		Connection.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o build/Debug/GNU-Linux-x86/MainWindow.o MainWindow.cpp

build/Debug/GNU-Linux-x86/Connection.o: Connection.cpp Connection.h \
		canlistener.h \
		msg.h \
		sferror.h \
		controller.h \
		canio.h \
		cannet.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o build/Debug/GNU-Linux-x86/Connection.o Connection.cpp

build/Debug/GNU-Linux-x86/canio.o: canio.cpp canio.h \
		msg.h \
		sferror.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o build/Debug/GNU-Linux-x86/canio.o canio.cpp

build/Debug/GNU-Linux-x86/cannet.o: cannet.cpp cannet.h \
		msg.h \
		sferror.h \
		canio.h \
		canlistener.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o build/Debug/GNU-Linux-x86/cannet.o cannet.cpp

build/Debug/GNU-Linux-x86/main.o: main.cpp MainWindow.h \
		MessageEditor.h \
		controller.h \
		canio.h \
		msg.h \
		sferror.h \
		cannet.h \
		canlistener.h \
		Transmit.h \
		Receive.h \
		Connection.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o build/Debug/GNU-Linux-x86/main.o main.cpp

build/Debug/GNU-Linux-x86/msg.o: msg.cpp msg.h \
		sferror.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o build/Debug/GNU-Linux-x86/msg.o msg.cpp

build/Debug/GNU-Linux-x86/Receive.o: Receive.cpp Receive.h \
		MessageEditor.h \
		controller.h \
		canio.h \
		msg.h \
		sferror.h \
		cannet.h \
		canlistener.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o build/Debug/GNU-Linux-x86/Receive.o Receive.cpp

build/Debug/GNU-Linux-x86/msgspv.o: msgspv.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o build/Debug/GNU-Linux-x86/msgspv.o msgspv.cpp

build/Debug/GNU-Linux-x86/Transmit.o: Transmit.cpp Transmit.h \
		MessageEditor.h \
		controller.h \
		canio.h \
		msg.h \
		sferror.h \
		cannet.h \
		canlistener.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o build/Debug/GNU-Linux-x86/Transmit.o Transmit.cpp

build/Debug/GNU-Linux-x86/controller.o: controller.cpp controller.h \
		canio.h \
		msg.h \
		sferror.h \
		cannet.h \
		canlistener.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o build/Debug/GNU-Linux-x86/controller.o controller.cpp

build/Debug/GNU-Linux-x86/MessageEditor.o: MessageEditor.cpp MessageEditor.h \
		controller.h \
		canio.h \
		msg.h \
		sferror.h \
		cannet.h \
		canlistener.h \
		Transmit.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o build/Debug/GNU-Linux-x86/MessageEditor.o MessageEditor.cpp

build/Debug/GNU-Linux-x86/moc_MessageEditor.o: moc_MessageEditor.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o build/Debug/GNU-Linux-x86/moc_MessageEditor.o moc_MessageEditor.cpp

build/Debug/GNU-Linux-x86/moc_Receive.o: moc_Receive.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o build/Debug/GNU-Linux-x86/moc_Receive.o moc_Receive.cpp

build/Debug/GNU-Linux-x86/moc_Transmit.o: moc_Transmit.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o build/Debug/GNU-Linux-x86/moc_Transmit.o moc_Transmit.cpp

build/Debug/GNU-Linux-x86/moc_Connection.o: moc_Connection.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o build/Debug/GNU-Linux-x86/moc_Connection.o moc_Connection.cpp

build/Debug/GNU-Linux-x86/moc_MainWindow.o: moc_MainWindow.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o build/Debug/GNU-Linux-x86/moc_MainWindow.o moc_MainWindow.cpp

####### Install

install:   FORCE

uninstall:   FORCE

FORCE:

