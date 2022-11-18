CC = gcc
CFLAGS = -Wall -Wextra -pedantic -g

CFILES = main.c bubble_sort.c usefull.c
OFILES = main.o bubble_sort.o usefull.o

OUTPUT = sortingalgorithms

.PHONY: all
all: $(OUTPUT)

$(OUTPUT): $(OFILES)
	$(CC) -o $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -c -o $@ $^

.PHONY: clean
clean:
	rm -rf $(OFILES) $(OUTPUT)