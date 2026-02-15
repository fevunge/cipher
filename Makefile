CC=cc
CFLAGS=-Wall -Wextra -Werror
RFLAGS=-lreadline -lhistory
SRC=main.c
NAME=cipher

all: 
	$(CC) $(CFLAGS) $(SRC) $(RFLAGS) -o $(NAME)
