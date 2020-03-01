CC=gcc
CFLAGS=-W -Wall -Werror -ldl
EXEC=appli


all: appli plugins


appli: main.c
	@$(CC) $< -o $(EXEC) $(CFLAGS)
	
plugins:
	@cd lib && make && cd ..



clean:
	@rm -f $(EXEC)
