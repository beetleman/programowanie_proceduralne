#ifndef _MAIN_LIB_H_
#define _MAIN_LIB_H_

#define N 10
#define M 15

struct point {
    int x, y;
};

/* zad1 */
int **inicjuj_tablice_wart_losowymi();

/* zad2 */
void zwolnij_tablice(int **tab);

/* zad3 */
struct element {
    struct element *next;
    int value;
};

struct element *inicjuj_lancuch(int elements);

/* zad4 */
void zwolnij_lancuch(struct element* lancuch);

/* zad5 */
int ile_ciagow_arytmetycznych(int **tab);

/* zad6 */
struct point znajdz_sume_minimalna(int **tab);

#endif /* _MAIN_LIB_H_ */
