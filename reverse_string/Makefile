CC = gcc
CFLAGS = -Wall -Wextra -pedantic -Iinclude

BUILD_DIR = build
SRC_DIR = src

TARGET = $(BUILD_DIR)/reverse

SRCS = $(SRC_DIR)/main.c \
       $(SRC_DIR)/reverse.c \
       $(SRC_DIR)/line_reader.c

OBJS = $(BUILD_DIR)/main.o \
       $(BUILD_DIR)/reverse.o \
       $(BUILD_DIR)/line_reader.o

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJS)

$(BUILD_DIR)/main.o: $(SRC_DIR)/main.c
	$(CC) $(CFLAGS) -c $(SRC_DIR)/main.c -o $(BUILD_DIR)/main.o

$(BUILD_DIR)/reverse.o: $(SRC_DIR)/reverse.c
	$(CC) $(CFLAGS) -c $(SRC_DIR)/reverse.c -o $(BUILD_DIR)/reverse.o

$(BUILD_DIR)/line_reader.o: $(SRC_DIR)/line_reader.c
	$(CC) $(CFLAGS) -c $(SRC_DIR)/line_reader.c -o $(BUILD_DIR)/line_reader.o

clean:
	rm -f $(BUILD_DIR)/*
