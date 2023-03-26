CFLAGS=-Wall -Wextra -Werror -std=c11 -g
CC=gcc
TARGET=code-output
VALGRIND-OPTIONS=--leak-check=yes --show-leak-kinds=all
INPUT=input.txt
OUTPUT=output.txt

all: ${TARGET}

${TARGET}: main.o structs.o stack.o queue.o deque.o
	${CC} ${CFLAGS} -o ${TARGET} main.o structs.o stack.o queue.o deque.o

main.o: main.c structs.h stack.h queue.h deque.h
	${CC} ${CFLAGS} -c main.c 

structs.o: structs.c structs.h
	${CC} ${CFLAGS} -c structs.c

stack.o: stack.c stack.h structs.h
	${CC} ${CFLAGS} -c stack.c

queue.o: queue.c queue.h structs.h
	${CC} ${CFLAGS} -c queue.c

deque.o: deque.c deque.h structs.h stack.h
	${CC} ${CFLAGS} -c deque.c

memcheck:
	valgrind ${VALGRIND-OPTIONS} ${TARGET} ${INPUT} ${OUTPUT}

clean: 
	rm -f ${TARGET}
	rm -f *.o
	rm -f ${OUTPUT}