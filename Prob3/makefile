# Celina Wong ECE361
# HW3 Problem3 part a
# Make file to handle build process for Problem 2 solution.


CC = gcc	#compiler
CFLAGS = -g -Wall #compiler flags
#OBJS = queue.o queue_test.o
#DEPS = queue.h
TARGET = queue_test

all: $(TARGET)
$(TARGET): $(TARGET).c
	$(CC) $(CFLAGS) -o $(TARGET) $(TARGET).c

clean:
	$(RM) $(TARGET)
