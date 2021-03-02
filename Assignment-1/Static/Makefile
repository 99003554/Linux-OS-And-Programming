TARGET = all
OBJ = test.o src/mystring.o src/myutils.o
DIR=${PWD}
CFLAGS=-I${DIR}/include
LDFLAGS=-lmystring -lmyutils
LIBPATH=${PWD}

all:all

all:test.o libystring.a libmyutils.a 
	gcc -L${LIBPATH} $< -o $@ ${LDFLAGS} 
libystring.a:src/mystring.o 
	ar rc $@ $^
libmyutils.a:src/myutils.o 
	ar rc $@ $^
%.o:src/%.c include/%.h

test.o: test.c include/*.h

test:
	./all

clean:
	rm -rf *.a *.o src/*.o ${TARGET}