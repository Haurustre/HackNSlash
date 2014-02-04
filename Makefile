#Makefile
CC=g++
CFLAGS= -g -Wall -Werror
CPPFLAGS=-I$(INCLUDE)
LDFLAGS=-L$(LIB)
LDLIBS=
OUTFILE=
OBJS=

INCLUDE=include/
LIB=lib/

all: $(OUTFILE)

$(OUTFILE): $(OBJS)

.o: .c

clean:
	rm -f $(OBJS) $(OUTFILE)