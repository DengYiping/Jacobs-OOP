/*
    CH08-320142
    Makefile
    Yiping Deng
    y.deng@jacobs-university.de
*/
CC=g++
CFLAGS=-c -Wall
LDFLAGS=
SOURCES=$(wildcard *.cpp)
OBJECTS=$(SOURCES:.cpp=.o)
	EXECUTABLE=test

all: $(SOURCES) $(EXECUTABLE)
	    
$(EXECUTABLE): $(OBJECTS) 
	    $(CC) $(LDFLAGS) $(OBJECTS) -o $@

.cpp.o:
	    $(CC) $(CFLAGS) $< -o $@
clean:
	    rm *.o $(EXECUTABLE)
