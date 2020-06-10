CC = g++
CFLAGS = -g -I.
DEPS = FoodItem.h Order.h Payment.h
OBJ = main.o

MAKEFLAGS = -W -w

.PHONY: all clean

all: app

%.o: %.c $(DEPS)
	$(CC) $(CFLAGS) -c -o $@ $<

app: $(OBJ) $(DEPS)
	$(CC) $(CFLAGS) -o $@ $^

clean:
	rm -f app *.o
