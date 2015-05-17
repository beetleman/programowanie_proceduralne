CFLAGS = -Wall -ansi # tutaj można dodawać inne flagi kompilatora
LDFLAGS = -lm

clean:
	rm -rf *.o main test_file_2.txt test_file_3.txt
main_lib.o:
	$(CC) $(CFLAGS) $(LDFLAGS) -o main_lib.o -c main_lib.c
timer_lib.o:
	$(CC) $(CFLAGS) $(LDFLAGS) -o timer_lib.o -c timer_lib.c
main: clean main_lib.o timer_lib.o
	$(CC) $(CFLAGS) $(LDFLAGS) main_lib.o timer_lib.o main.c -o main
test: main
	./main; make clean
