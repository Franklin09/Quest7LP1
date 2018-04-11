#Makefile for jogar by David
EXE=jogar
CC=g++
CPPFLAGS=-Wall -pedantic -std=c++11
OBJS = main.o jogador.o dado.o
INC=./includes
SRC=./src

$(EXE): $(OBJS)
	$(CC) $(CFLAGS) -o $(EXE) $(OBJS)
	mkdir build bin
	mv *.o ./build
	mv jogar ./bin

main.o:
	$(CC) $(CPPFLAGS) -I $(INC) -c $(SRC)/main.cpp 
jogador.o:
	$(CC) $(CPPFLAGS) -I $(INC) -c $(SRC)/jogador.cpp 
dado.o:
	$(CC) $(CPPFLAGS) -I $(INC) -c $(SRC)/dado.cpp 
clean:
	rm -R ./bin ./build
