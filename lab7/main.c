#include <stdio.h>
#include <stdlib.h>
#include "main_lib.h"

int main(int argc, char *args[])
{
    int i;
    /* zad1 */


    /* zad2 */
    struct point ** points = (struct point **) calloc(MAX_W, sizeof(struct point*));
    zabawa_z_struct(points);

    /* zad3 */
    if (argc < 3){
        printf("Error: za malo argumentow!\n");
        return -1;
    } else {
        for (i = 1; i < argc; i++) {
            printf("argc[%d] = %s\n", i, args[i]);
        }
    }

    /* zad4 */


    /* zad5 */


    return 0;
}
