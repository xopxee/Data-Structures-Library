CC = gcc
LDFLAGS = -Wall -Wextra -Werror
TARGET = main
HEADERS = ds.h 
SOURCES = main.c ds.c
DEPENDENCIES = $(HEADERS) $(SOURCES) 

all: $(TARGET)

$(TARGET): $(DEPENDENCIES)
	$(CC) $(LDFLAGS) $(SOURCES) -o $(TARGET)
	
run: $(TARGET)
	./$(TARGET)
	
clean:
	rm -f $(TARGET)