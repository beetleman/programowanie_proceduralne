#ifndef _MAIN_LIB_H_
#define _MAIN_LIB_H_

/* zadanie 1 */
void reverse(char s[]);

/* zadanie 2 */
int strlen_with_null(char *s);

/* zadanie 3 */
int power(int x, int p);
int power_iter(int x, int p);

/* zadanie 4 */
int tab_sum(int *tab, int first, int length);
int tab_sum_iter(int *tab, int first, int length);

/* zadanie 5 */
int search_string(char *s, char *t);

/* zadanie 6 */
char *clone(char *s);

/* zadanie 7 */
void read_and_write(int p);

/* zadanie 8 */
int fib2(long n);

int fib(long n);
int fib_iter(long n);

/* przyklad gratis by Wiola <3 */
int silnia(int n);
int silnia_iter(int n);

#endif /* _MAIN_LIB_H_ */
