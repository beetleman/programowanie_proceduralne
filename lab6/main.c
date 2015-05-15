#include <stdio.h>
#include <stdlib.h>
#include "main_lib.h"

int main(int argc, char *args[])
{
    /* zad1 */
    read_and_print("./main.c");

    /* zad2 */
    printf("ilosc znakow: %d\n", count_chars("./main.c"));

    /* zad3 */
    compare_files("./main.c", "./main.c");
    compare_files("./main.c", "./main_lib.h");

    /* zad4 */
    /* binary_copy(infile, outfile, buffer_size); */

    /* zad5 */
    /* read_and_write_3(infile, outfile); */

    return 0;
}
