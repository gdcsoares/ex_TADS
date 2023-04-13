CC=gcc
CFLAGS=-lm
DEPS= main.h livro.h
OBJ=main.o livro.o

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

ponto: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)
	echo "Compilado!"

clean:
	rm -rf *.o main

run:
	./main
