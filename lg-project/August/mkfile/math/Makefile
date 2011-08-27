CC = gcc
libmmath.so:add.o sub.o mul.o
	gcc -shared $^ -o $@
%.o:%.c
	$(CC) -fPIC -c $<

.PHONY:clean
clean:
	rm -f *.o

