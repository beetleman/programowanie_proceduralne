#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct zesp {
    int real;
    int img;
} Zesp;

Zesp z_add(Zesp*, Zesp*);
Zesp z_sub(Zesp*, Zesp*);
Zesp z_mul(Zesp*, Zesp*);
Zesp z_div(Zesp*, Zesp*);

int main()
{
    Zesp a = {
        .real = 2,
        .img = 2
    };
    Zesp b = {
        .real = 2,
        .img = 2
    };
    Zesp c = z_add(&a, &b);
    return 0;
}


Zesp z_add(Zesp* a, Zesp* b)
{
    Zesp c = {
        .real = a->real + b->real,
        .img = a->img + b->img
    };

    return c;
}

Zesp z_sub(Zesp* a, Zesp* b)
{
    Zesp c = {
        .real = a->real - b->real,
        .img = a->img - b->img
    };

    return c;
}

Zesp z_mul(Zesp* a, Zesp* b)
{
    Zesp c;

    return c;
}

Zesp z_div(Zesp* a, Zesp* b)
{
    Zesp c;

    return c;
}
