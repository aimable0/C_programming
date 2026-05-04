
CC = gcc
CFLAGS = -Wall -Werror -Wextra -g
ops: ops.o
	$(CC) $(CFLAGS) ops.o -o ops
ops.o: ops.c
	$(CC) $(CFLAGS) ops.c -c
clea:
	rm -rf ops.o ops
