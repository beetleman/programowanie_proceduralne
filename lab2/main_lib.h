#ifndef __MAIN_LIB__
#define __MAIN_LIB__
/* tutaj są wpisane deklaracje funkcji */

#define M 4
#define N 4
#define N_POINTS 100

struct point {
    int x, y;
};

struct point find_min_sum(int **tab);
void tab_init_random(struct point *tab);
void init_rand(void);

#endif
