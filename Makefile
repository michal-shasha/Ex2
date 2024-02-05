CC = gcc
AR = ar
OBJECTS_MAIN = main.o
OBJECTS_LIB_MY_MAT = my_mat.o
FLAGS = -Wall -g

all: libmymat.a mains
libmymat.a:$(OBJECTS_LIB_MY_MAT)
	$(AR) -rcs libmymat.a $(OBJECTS_LIB_MY_MAT)
mains: $(OBJECTS_MAIN) libmymat.a
	$(CC) $(FLAGS) -o mains $(OBJECTS_MAIN) libmymat.a
my_mat.o: my_mat.c my_mat.h
	$(CC) $(FLAGS) -c my_mat.c
main.o: main.c my_mat.h
	$(CC) $(FLAGS) -c main.c
clean:
	rm -f *.o *.a mains
