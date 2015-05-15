#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main_lib.h"

/* zad1 */
void read_and_print(char *file_name)
{
    FILE *fp;
    char buf[BUFFER_SIZE];
    int counter = 1;

    fp = fopen(file_name, "r");
    if (fp == NULL)
        exit(EXIT_FAILURE);

    while (fgets(buf, BUFFER_SIZE, fp)) {
        printf("%4.d | %s", counter++, buf);
    }

    fclose(fp);
}


/* zad2 */
int count_chars(char *file_name)
{
    int result = 0;
    FILE *fp;
    char buf[BUFFER_SIZE];

    fp = fopen(file_name, "r");
    if (fp == NULL)
        exit(EXIT_FAILURE);

    while (fgets(buf, BUFFER_SIZE, fp)) {
        result += strlen(buf);
    }

    fclose(fp);

    return result;
}


/* zad3 */
void compare_files(char *file_in1, char *file_in2)
{
    
}


/* zad4 */
void binary_copy(char *file_in, char *file_out, int buffer_size)
{
    
}

/* zad5 */
void read_and_write_3(char *file_in, char *file_out)
{
    
}

