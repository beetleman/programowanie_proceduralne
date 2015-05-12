CFLAGS = -Wall -ansi # tutaj można dodawać inne flagi kompilatora
LDFLAGS = -lm

clean:
	rm -rf *.o main
main_lib.o:
	$(CC) $(CFLAGS) $(LDFLAGS) -o main_lib.o -c main_lib.c
main: clean main_lib.o 
	$(CC) $(CFLAGS) $(LDFLAGS) main_lib.o main.c -o main
test: main
	./main