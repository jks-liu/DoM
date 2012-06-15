#filename: Makefile
#author:   jks
#date:     14-Jun-201

VPATH=./src/:./inc/:./tmp/

CC=g++
CFLAGS = -I./inc/ -I/usr/local/boost_1_49_0/ 

OBJS=main.o 

all: $(OBJS)
	$(CC) $(CFLAGS) $(^D)/$(^F) -o dom

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o ./tmp/$@

.PHONY: clean
clean:
	rm -f ./dom
	rm -f ./tmp/?*

.PHONY: run
run:
	./dom


