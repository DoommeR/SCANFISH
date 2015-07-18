TEMPLATE = app
INCLUDEPATH = /home/doommer/LetoPract/SCANFISH/SOURCE/headers
DEPENDPATH = $$PWD/realization
HEADERS +=	canio.h	\
		canlistener.h	\
		cannet.h	\
		Connection.h	\
		controller.h	\
		generalScreen.h \
		gsConnect.h	\
		gsMessageEditor.h \
		gsReceive.h	\
		gsReceiveSL.h	\
		gsTransmit.h	\
		gsTransmitSL.h	\
		MainWindow.h	\
		MainWindowTab.h	\
		MessageEditor.h	\
		msg.h		\
		msgspv.h	\
		Receive.h	\
		sferror.h	\
		Transmit.h	
SOURCES += 	canio.cpp	\
		cannet.cpp 	\
		Connection.cpp 	\
		controller.cpp 	\
		generalScreen.cpp \
		gsConnect.cpp 	\
		gsMessageEditor.cpp \
		gsReceive.cpp 	\
		gsReceiveSL.cpp \
		gsTransmit.cpp 	\
		gsTransmitSL.cpp \
		main.cpp 	\
		MainWindow.cpp 	\
		MainWindowTab.cpp 	\
		MessageEditor.cpp 	\
		moc_Connection.cpp 	\
		moc_MainWindow.cpp 	\
		moc_MainWindowTab.cpp 	\
		moc_MessageEditor.cpp 	\
		moc_Receive.cpp 	\
		moc_Transmit.cpp 	\
		msg.cpp 	\
		msgspv.cpp 	\
		Receive.cpp 	\
		Transmit.cpp
