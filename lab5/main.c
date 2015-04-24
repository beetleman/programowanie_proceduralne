#include <stdio.h>
#include <stdlib.h>
#include <limits.h>


#include "main_lib.h"
#include "timer_lib.h"


int main()
{
    int i;
    register int i_r;
    start_timer();
    for (i = 0; i < 10; i++) {
        exec_count();
        exec_count_static();
    }
    printf("wykonanie countow: %ld\n", stop_timer());

    start_timer();
    for (i = INT_MIN; i < INT_MAX; i++);
    printf("Pentla dla int: %ld\n", stop_timer());

    start_timer();
    for (i_r = INT_MIN; i_r < INT_MAX; i_r++);
    printf("Pentla dla register int: %ld\n", stop_timer());

    return 0;
}
