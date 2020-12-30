CC = gcc -Wall

all: isort txtfind
isort: main1.o isort.o
	$(CC) -o isort main1.o isort.o
txtfind: main2.o txtfind.o
	$(CC) -o txtfind main2.o txtfind.o
isort.o: isort.c
	$(CC) -c isort.c
txtfind.o: txtfind.c
	$(CC) -c txtfind.c
main1.o: main1.c isort.h
	$(CC) -c main1.c
main2.o: main2.c txtfind.h
	$(CC) -c main2.c
.PHONY: all clean
clean:
	rm *.o isort txtfind