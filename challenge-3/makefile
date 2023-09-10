# Makefile for a simple C program

# Compiler
CC = gcc

# Compiler flags
CFLAGS = -Wall -g

# Source files
SOURCES = main.c 

# Object files
OBJECTS = $(SOURCES:.c=.o)

# Executable name
EXECUTABLE = exec

# Default target
all: $(EXECUTABLE)

# Linking step
$(EXECUTABLE): $(OBJECTS)
	$(CC) $(CFLAGS) -o $@ $(OBJECTS)

# Compilation step
%.o: %.c
	$(CC) $(CFLAGS) -c $<

# Clean up
clean:
	rm -f $(OBJECTS) $(EXECUTABLE)
