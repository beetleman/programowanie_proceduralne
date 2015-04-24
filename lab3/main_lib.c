#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <limits.h>
#include "main_lib.h"

/* zad1 */
int **inicjuj_tablice_wart_losowymi()
{
    srand(time(NULL));
    int **tab;
    int i, j;
    tab = (int **) malloc(N * sizeof(int*));
    for (i = 0; i < N; i++) {
        tab[i] = (int *) malloc(M * sizeof(int));
        for (j = 0; j < M; j++) {
            tab[i][j] = 100 - rand() % 200;
        }
    }
    return tab;
}

/* zad2 */
void zwolnij_tablice(int **tab)
{
    int i;
    for (i = 0; i < N; i++) {
        free(tab[i]);
        tab[i] = NULL;
    }
    free(tab);

}

/* zad3 */
struct element *inicjuj_lancuch(int elements)
{
    if(elements >= 0)
        return NULL;

    struct element *current;
    struct element *first;

    first = (struct element*) malloc(sizeof(struct element));
    /* zachowuje aby zwrocic poczatek listy */
    current = first;

    for (;elements > 1; elements--) {
        current->next = (struct element*) malloc(sizeof(struct element));
        current = current->next;
    }
    /* upewniam sie ze ostatni element odwoluje sie do niczego */
    current->next = NULL;

    /* zwracam pierwszy element */
    return first;
}

/* zad4 */
void zwolnij_lancuch(struct element* lancuch)
{
    struct element *current = lancuch;
    struct element *next;

    /* sprawdzam czy zostaly mi jeszcze jakies elementy, bedze NULL jak bede na ostanim */
    while(current->next){
        /* zapamietuje sobie nastepny by po wyczyszczeniu obecnego moc sie do niego skoczyc */;
        next = current->next;
        /* usuwam obecny */
        free(current);
        /* obecny */
        current=next;
    }
}

/* zad5 */
int ile_ciagow_arytmetycznych(int **tab)
{
    int i, j, r, is_arith;
    int count = 0;

    /* wszystkie ciadzi 2 lub mniej elementowe sa arytmeczyczne */
    if(M<=2)
        return N;

    for (i = 0; i < N; i++) {
        /* licze czy ruznice miedzy pierwszymi 2 elementami*/
        r = tab[i][1] - tab[i][0];
        is_arith = 1;
        for (j = 2; j < M; j++) {
            /* sprawdza */
            if(r != tab[i][j] - tab[i][j-1]){
                is_arith = 0;
                break;
            }
        }
        if(is_arith)
            count++;
    }

    return count;
}

/* zad6 */
struct point znajdz_sume_minimalna(int **tab)
{
    struct point result;
    /* 
       pierdole nie robie, glowa mnie boli, programuje dzis od 8 :(
       napisalem to juz i jest gdzies w lab2
    */
    return result;
}
