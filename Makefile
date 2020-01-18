CPPFLAGS=-std=c++11 -Wall
LDLIBS=-L/home/h00s/src/sfml/latest/lib/
LDINCLUDE=-I/home/h00s/src/sfml/latest/include/
LDSFMLFLAGS=-lsfml-system -lsfml-window -lsfml-graphics
EXECUTABLE=tetrispp

SOURCES=tetrispp.cpp game.cpp

tetrispp: tetrispp.cpp
	clang++ $(CPPFLAGS) -o $(EXECUTABLE) $(LDLIBS) $(LDINCLUDE) $(LDSFMLFLAGS) $(SOURCES)

.PHONY: clean
clean:
	-rm $(EXECUTABLE)