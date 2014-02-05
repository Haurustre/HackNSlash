#Makefile
CC=g++
CFLAGS=-Wall -Werror
CPPFLAGS=-I$(INCLUDE)
LDFLAGS=-L$(LIB)
LDLIBS=
OUTFILE=hackNslash
OBJS=hackNSlash.o

INCLUDE=include/
LIB=lib/

all: $(OUTFILE)

$(OUTFILE): $(OBJS)

hackNSlash.o: hackNSlash.cpp

clean:
	rm -f $(OBJS) $(OUTFILE)