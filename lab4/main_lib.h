#ifndef _MAIN_LIB_H_
#define _MAIN_LIB_H_

void reverse(char s[]);

int strlen_with_null(char *s);

int power(int x, int p);
int power_iter(int x, int p);

int tab_sum(int *tab, int first, int length);
int tab_sum_iter(int *tab, int first, int length);

int search_string(char *s, char *t);

char *clone(char *s);

void read_and_write(int p);

int fib2(long n);

int fib(long n);
int fib_iter(long n);

int silnia(int n);
int silnia_iter(int n);

#endif /* _MAIN_LIB_H_ */
