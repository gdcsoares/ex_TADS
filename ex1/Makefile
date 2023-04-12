CC=gcc
CFLAGS=-lm
DEPS= main.h data.h
OBJ=main.o data.o

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

ponto: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)
	echo "Compilado!"

clean:
	rm -rf *.o main

run:
	./main
