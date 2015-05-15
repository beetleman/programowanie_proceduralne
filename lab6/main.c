#include <stdio.h>
#include <stdlib.h>
#include "main_lib.h"

int main(int argc, char *args[])
{
    /* zad1 */
    read_and_print("./test_file.txt");

    /* zad2 */
    printf("ilosc znakow: %d\n", count_chars("./test_file.txt"));

    /* zad3 */
    compare_files("./test_file.txt", "./test_file.txt");
    compare_files("./test_file.txt", "./main_lib.h");

    /* zad4 */
    binary_copy("./test_file.txt", "./test_file_2.txt", BUFFER_SIZE);
    compare_files("./test_file.txt", "./test_file_2.txt");

    /* zad5 */
    /* read_and_write_3(infile, outfile); */

    return 0;
}
