CC=gcc
CFLAGS=-W -Wall -ldl
EXEC=appli


all: build-appli build-plugins


build-appli: main.c
	@$(CC) $< -o $(EXEC) $(CFLAGS)
	
build-plugins:
	@cd lib && make && cd ..



clean:
	@rm -f $(EXEC)
