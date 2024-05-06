all: compile link

compile:
	g++ -Isrc/include -c application.cpp model/player.cpp

link:
	g++ application.o player.o -o application -Lsrc/lib -lsfml-graphics -lsfml-window -lsfml-system
