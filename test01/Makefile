CC=gcc
CFLAGS=-Wall -g -c
OBJS=etest.o func.o
TARGET=etest
$(TARGET):$(OBJS)
	$(CC) -Wall -g  $(OBJS) -o $@
func.o:func.c
	$(CC) -c $^ -o $@
etest.o:etest.c
	$(CC) -c $^ -o $@
clean:
	rm -f *.o etest	
