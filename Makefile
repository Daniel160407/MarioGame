all: compile link

compile:
	g++ -Isrc/include -c application.cpp model/player.cpp model/step.cpp

link:
	g++ application.o player.o step.o -o application -Lsrc/lib -lsfml-graphics -lsfml-window -lsfml-system
