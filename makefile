CC       = gcc
CFLAGS   = -Wall
LDFLAGS = -lm
OBJFILES = main.o network.o
TARGET   = network

$(TARGET): $(OBJFILES)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJFILES)
run:	
	./$(TARGET)
clean:
	rm -f $(OBJFILES) $(TARGET) *~