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
    if (fp == NULL) {
        printf("Error: %s", file_name);
        return;
    }

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
    if (fp == NULL) {
        printf("Error: %s", file_name);
        return -1;
    }

    while (fgets(buf, BUFFER_SIZE, fp)) {
        result += strlen(buf);
    }

    fclose(fp);

    return result;
}


/* zad3 */
void compare_files(char *file_in1, char *file_in2)
{
    FILE *fp_1;
    FILE *fp_2;

    char buf_1[BUFFER_SIZE];
    char buf_2[BUFFER_SIZE];
    int counter = 1;

    fp_1 = fopen(file_in1, "r");
    if (fp_1 == NULL) {
        printf("Error: %s", file_in1);
        return;
    }

    fp_2 = fopen(file_in2, "r");
    if (fp_2 == NULL) {
        fclose(fp_1);
        printf("Error: %s", file_in2);
        return;
    }

    while (fgets(buf_1, BUFFER_SIZE, fp_1) &&
           fgets(buf_2, BUFFER_SIZE, fp_2)) {
        if (strncmp(buf_1, buf_2, BUFFER_SIZE)) {
            printf("Pliki sie roznia w lini %d: \n", counter++);
            printf("%20s > %s", file_in1, buf_1);
            printf("%20s > %s\n", file_in2, buf_2);
            break;
        }
    }

    fclose(fp_1);
    fclose(fp_2);
}


/* zad4 */
void binary_copy(char *file_in, char *file_out, int buffer_size)
{
    FILE *fp_in;
    FILE *fp_out;
    char buf[buffer_size];

    fp_in = fopen(file_in, "rb");
    if (fp_in == NULL) {
        printf("Error: %s", file_in);
        return;
    }

    fp_out = fopen(file_out, "wb");
    if (fp_out == NULL) {
        fclose(fp_out);
        printf("Error: %s", file_out);
        return;
    }

    while (!feof(fp_in) && !ferror(fp_out)){
        fwrite(
            buf,
            1,
            fread(buf, 1, buffer_size, fp_in),
            fp_out);
    }

    fclose(fp_in);
    fclose(fp_out);
}

/* zad5 */
void read_and_write_3(char *file_in, char *file_out)
{
    
}

