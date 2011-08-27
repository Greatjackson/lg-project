LDFLAGS = -L /home/akaedu/xwp/mkfile/math -lmmath 
CFLAGS = -Wall -g
CC = gcc

src = $(wildcard *.c)
obj = $(patsubst %.c, %.o, $(src))

app:$(obj)
#app:foo.o seg.o
	$(CC) $^ -o $@
%.o:%.c
	$(CC) $(CFLAGS) $< -c
#foo.o:foo.c
#	$(CC) $(CFLAGS) $^ -c 
#	gcc foo.c -c
#seg.o:seg.c
#	gcc seg.c -c
.PHONY:clean
clean:
	rm -f *.o
	rm -f app
