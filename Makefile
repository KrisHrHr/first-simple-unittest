CC = gcc
CFLAGS = -g
EXECUTABLE = calc_test
SOURCE_FILES = calc_test.c \
				calc_beg.c
				
all:
	$(CC) $(SOURCE_FILES) $(CFLAGS) -o $(EXECUTABLE) -l cmocka
