include sfml.mak

CPPFLAGS=-std=c++11 -Wall
LDLIBS=-L$(SFMLDIR)/lib/
LDINCLUDE=-I$(SFMLDIR)/include/
LDSFMLFLAGS=-lsfml-system -lsfml-window -lsfml-graphics
EXECUTABLE=tetrispp

SOURCES=tetrispp.cpp game.cpp

tetrispp: tetrispp.cpp
	clang++ $(CPPFLAGS) -o $(EXECUTABLE) $(LDLIBS) $(LDINCLUDE) $(LDSFMLFLAGS) $(SOURCES)

.PHONY: clean
clean:
	-rm $(EXECUTABLE)