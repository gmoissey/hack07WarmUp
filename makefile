#
# makefile for array_uitils
#

CC = gcc
FLAGS = -Wall --std=gnu99
INCLUDES = -lm

imageDriver: array_utils.o arrayTester.c
	$(CC) $(FLAGS) array_utils.o arrayTester.c -o arrayTester $(INCLUDES)

imageUtils.o: array_utils.c array_utils.h
	$(CC) $(FLAGS) -c array_utils.c -o array_utils.o $(INCLUDES)

clean:
	rm -f *~ *.o