CC = gcc
CFLAGS = -Wall -Wextra -pedantic -Iinclude

BUILD_DIR = build
SRC_DIR = src

TARGET = $(BUILD_DIR)/anagram

SRCS = \
	$(SRC_DIR)/main.c \
	$(SRC_DIR)/anagram.c \
	$(SRC_DIR)/line_reader.c

OBJS = \
	$(BUILD_DIR)/main.o \
	$(BUILD_DIR)/anagram.o \
	$(BUILD_DIR)/line_reader.o

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^

$(BUILD_DIR)/main.o: $(SRC_DIR)/main.c
	$(CC) $(CFLAGS) -c $< -o $@

$(BUILD_DIR)/anagram.o: $(SRC_DIR)/anagram.c
	$(CC) $(CFLAGS) -c $< -o $@

$(BUILD_DIR)/line_reader.o: $(SRC_DIR)/line_reader.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(BUILD_DIR)/*