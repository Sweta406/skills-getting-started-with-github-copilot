CC = gcc
CFLAGS = -Wall -Wextra -std=c99
TARGET = data_monitor
SOURCE = data_monitor.c

$(TARGET): $(SOURCE)
	$(CC) $(CFLAGS) -o $(TARGET) $(SOURCE)

clean:
	rm -f $(TARGET)

run: $(TARGET)
	./$(TARGET)

.PHONY: clean run