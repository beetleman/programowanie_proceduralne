#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main_lib.h"

/* zad1 */
void from_keyboard(char *inputs[])
{
    int i;
    char buf[BUFFER_SIZE];

    for(i = 0;
        fgets(buf, sizeof(buf), stdin) != NULL && i < MAX_W;
        i++) {

        inputs[i] = (char *) malloc((sizeof(char) +1) * strlen(buf));
        strcpy(inputs[i], buf);

    }
}

/* zad2 */
void zabawa_z_struct(struct point ** points)
{
    int i, j;

    for (i = 0; i < MAX_W; i++) {
        points[i] = (struct point *) calloc(i + 1, sizeof(struct point));
        for (j = 0; j <= i; j++) {
            points[i][j].x = i;
            points[i][j].y = j;
        }

    }

    printf("x = %d, y = %d \n",
           points[10][5].x,
           points[10][5].y);
    printf("x = %d, y = %d \n",
           points[10][5].x,
           (points[10] + 5)->y);

    for (i = 0; i < MAX_W; i++) {
        free(points[i]);
    }
    free(points);

}


/* zad3 */


/* zad4 */


/* zad5 */
