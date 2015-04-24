#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void reverse(char s[])
{
    int length = strlen(s);
    char ch_tmp;
    int i;

    for (i = 0; i < length/2; i++) {
        ch_tmp = s[i];
        s[i] = s[length - i - 1];
        s[length -i -1] = ch_tmp;
    }
}


int strlen_with_null(char *s)
{
    int i;
    for (i = 0; s[i]; i++);
    return i;
}


int power(int x, int p)
{
    if(p <= 0)
        return 1;
    return x * power(x, p -1);
}


int tab_sum(int *tab, int first, int length)
{
    if(first >= length)
        return 0;
    return tab[first] + tab_sum(tab, first + 1, length);
}


int search_string(char *s, char *t)
{
    int len_s = strlen(s);
    int len_t = strlen(t);
    int i, j, ok = 1;

    if(len_s < len_t)
        return 0;

    for (i = 0; i <= len_s - len_t; i++) {
        ok = 1;
        for (j = 0; j < len_t; j++) {
            if(s[i+j] != t[j]){
                ok = 0;
                break;
            }
        }
        if(ok)
            return ok;
    }

    return 0;
}


char *clone(char *s)
{
    char *clone_s;
    clone_s = (char *) calloc(strlen(s)*1, sizeof(char));
    strcpy(clone_s, s);
    return clone_s;
}


void read_and_write(int p)
{
    char str[100];

    while (fgets(str, 100, stdin)){
        if (strlen(str) > p)
            printf("%s\n", str);
    }
}


long fib(long n)
{
    if(n <= 1)
        return n;
    return fib(n - 1) + fib(n -2);
}


long _fib2(long p_n1, long p_n2, int c)
{
    if(c < 1)
        return p_n1;
    return _fib2(p_n2, p_n1 + p_n2, c -1);
}


long fib2(long n)
{
    return _fib2(0, 1, n);
}