#include <stdio.h>
#include <stdlib.h>

typedef struct pracownik {
    char imie[20];
    char nazwisko[30];
    int id;
    long long pesel;
} Pracownik;


int main()
{
    Pracownik os = {
        .imie = "Olga",
        .nazwisko = "Kot",
        .id = 12,
        .pesel = 12121221
    };

    Pracownik os2;
    printf("imie: ");
    scanf("%s", os2.imie);

    printf("nazwisko: ");
    scanf("%s", os2.nazwisko);

    printf("id: ");
    scanf("%d", &os2.id);

    printf("pesel: ");
    scanf("%lld", &os2.pesel);

    return 0;
}
