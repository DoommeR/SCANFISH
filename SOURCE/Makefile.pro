TEMPLATE = app
TARGET = ScanFish
QT += gui widgets testlib
DESTDIR = Release/GNU-Linux-x86
OBJECTS_DIR = build
MOC_DIR = build
UI_DIR = build
HEADERS =	headers/canio.h	\
		headers/canlistener.h	\
		headers/cannet.h	\
		headers/Connection.h	\
		headers/controller.h	\
		headers/generalScreen.h \
		headers/gsConnect.h	\
		headers/gsMessageEditor.h \
		headers/gsReceive.h	\
		headers/gsReceiveSL.h	\
		headers/gsTransmit.h	\
		headers/gsTransmitSL.h	\
		headers/MainWindow.h	\
		headers/MainWindowTab.h	\
		headers/MessageEditor.h	\
		headers/msg.h		\
		headers/msgspv.h	\
		headers/Receive.h	\
		headers/sferror.h	\
		headers/Transmit.h	
SOURCES = 	realization/canio.cpp	\
		realization/cannet.cpp 	\
		realization/Connection.cpp 	\
		realization/controller.cpp 	\
		realization/generalScreen.cpp \
		realization/gsConnect.cpp 	\
		realization/gsMessageEditor.cpp \
		realization/gsReceive.cpp 	\
		realization/gsReceiveSL.cpp \
		realization/gsTransmit.cpp 	\
		realization/gsTransmitSL.cpp \
		realization/main.cpp 	\
		realization/MainWindow.cpp 	\
		realization/MainWindowTab.cpp 	\
		realization/MessageEditor.cpp 	\
		realization/msg.cpp 	\
		realization/msgspv.cpp 	\
		realization/Receive.cpp 	\
		realization/Transmit.cpp	
CONFIG += qt warn_on release
