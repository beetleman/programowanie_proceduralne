#ifndef _MAIN_LIB_H_
#define _MAIN_LIB_H_

/* zad1 */
#define BUFFER_SIZE 8192
void read_and_print(char *file_name);

/* zad2 */
int count_chars(char *file_name);

/* zad3 */
void compare_files(char *file_in1, char *file_in2);

/* zad4 */
void binary_copy(char *file_in, char *file_out, int buffer_size);

/* zad5 */
#define BYTES_TO_READ 5
void read_and_write_3(char *file_in, char *file_out);

#endif /* _MAIN_LIB_H_ */
