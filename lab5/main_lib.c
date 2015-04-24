#include <stdio.h>
#include <stdlib.h>

int _count = 0;
void exec_count(void)
{
    _count++;
    printf("%d\n", _count);
}


void exec_count_static(void)
{
    static int static_count = 0;
    static_count++;
    printf("%d\n", static_count);
}
