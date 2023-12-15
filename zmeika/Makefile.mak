CC = g++
CFLAGS = -std=c++11
LDFLAGS = -L. -lapple -lsnake -lmap -lengine

all: main

main: main.cpp libapple.a libsnake.a libmap.a libengine.a
	$(CC) $(CFLAGS) $(LDFLAGS) main.cpp -o main

libapple.a: apple.cpp apple.h
	$(CC) $(CFLAGS) -c apple.cpp -o apple.o
	ar rcs libapple.a apple.o

libsnake.a: snake.cpp snake.h
	$(CC) $(CFLAGS) -c snake.cpp -o snake.o
	ar rcs libsnake.a snake.o

libmap.a: map.cpp map.h
	$(CC) $(CFLAGS) -c map.cpp -o map.o
	ar rcs libmap.a map.o

libengine.a: engine.cpp engine.h libapple.a libsnake.a libmap.a
	$(CC) $(CFLAGS) -c engine.cpp -o engine.o
	ar rcs libengine.a engine.o

clean:
	rm -f main libapple.a libsnake.a libmap.a libengine.a *.o
