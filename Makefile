all : stringOp.c
	gcc -Wall -Werror -fsanitize=address -o stringOp stringOp.c
clean :
	rm -rf stringOp
