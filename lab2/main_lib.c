#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "main_lib.h"


struct point find_min_sum(int **tab){
    int x,y, sum, new_sum;
    struct point p = {x = 0, y = 1};
    sum = tab[0][0] + tab[0][2];

    for (x = 2; x < N; x++) {
        for (y = 0; y < N; y++) {
            new_sum = tab[x][y-1] + tab[x][y+1];
            if(sum > new_sum){
                p.x = x;
                p.y = y;
                sum = new_sum;
            }
        }
    }
    return p;
}


int __srand__ = 0;
void init_rand(void){
    if(!__srand__){
        srand(time(NULL));
        __srand__ = 1;
    }
}

void tab_init_random(struct point *tab){
    int i;
    struct point *p;

    init_rand();

    tab = (struct point*) malloc(N_POINTS * sizeof(struct point));
    for (i = 0; i < N_POINTS; i++) {
        p = (struct point*) malloc(sizeof(struct point));
        p->x = 100 - rand() % 200;
        p->y = 100 - rand() % 200;
        tab[i] = *p;
    }
}
