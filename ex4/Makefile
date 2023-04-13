CC=gcc
CFLAGS=-lm
DEPS= main.h retangulo.h circulo.h triangulo.h
OBJ=main.o retangulo.o circulo.o triangulo.o

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

ponto: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)
	echo "Compilado!"

clean:
	rm -rf *.o main

run:
	./main