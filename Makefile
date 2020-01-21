#
# CSE30 Makefile
#
# we declare the object we want to build in the variable EXE
# we list the objects we want to compile (from c) in OBJS
#
# we provide a phony target clean to rm all the .o files
#

EXE = banner
OBJS = main.o fontBuffer.o displayBuffer.o
CFLAGS = -std=gnu99 -Wall -Wextra
.PHONY: clean

$(EXE) : $(OBJS)
	gcc -Wall -Wextra -o $@ $(OBJS)

main.o : main.c globals.h
fontDB.o : fontBuffer.c globals.h
buffer.o : displayBuffer.c globals.h

clean :
	rm $(EXE)
	rm -f $(OBJS)
