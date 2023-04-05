all: geraos principal

principal: data.h
   gcc data.h -o principal

geraos: main.c data.c
   gcc -c main.c data.c

clean:
   rm -rf *.o principal
