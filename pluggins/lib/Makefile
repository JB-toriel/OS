CC=gcc
LFLAGS=-shared 
CFLAGS=-c -W -Wall -Werror -Isource -fPIC

PLUGINS_SRC=$(wildcard *.c)
PLUGINS=$(PLUGINS_SRC:.c=.so)

all: $(PLUGINS)

%.so: %.o
	@$(CC)  $< -o $@ $(LFLAGS)

%.o: %.c
	@$(CC) $(CFLAGS) $<

clean:
	@rm -f *.so
