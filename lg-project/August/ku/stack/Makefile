CC = gcc
libstack.so:is_empty.o pop.o push.o stack.o 
	gcc -shared $^ -o $@
%.o:%.c
	$(CC) -fPIC -c $<
