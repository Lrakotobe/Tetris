CC = g++
SRC = plateau.cpp blocs.cpp main.cpp
OBJ = $(SRC:.c=.o)
HEADERS = plateau.h blocs.h
CFLAGS = -Wall
PROG = tetris


$(PROG): plateau.o blocs.o main.o
	$(CC) -o $@ $(OBJ)
%.o: %.cpp
	$(CC) -c $< $(CFLAGS)
