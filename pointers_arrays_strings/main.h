#ifndef MAIN_H
#define MAIN_H

int _putchar(char c);/*prototype for _putchar */
void print_alphabet(void);/* prototype for print_alphabet */
void print_alphabet_x10(void);/*prototype 10 times alphabet */
int _islower(int c);/* checks for lowercases */
int _isalpha(int c);/* checks for letter */
int print_sign(int n);/* check the sign */
int _abs(int n);/* print the absolute value of an integer */
int print_last_digit(int n);/* print the last digit */
void jack_bauer(void);/* count 24h */
void times_table(void);/* print the time table till 9 */
int add(int a, int b);/* additions */
void print_to_98(int n);/* from n to 98 */
int _isupper(int c);/* uppercase */
int _isdigit(int c);/* digits */
int mul(int a, int b);/* multiplicate */
void print_numbers(void);/* numbers */
void print_most_numbers(void);/* exceptions */
void more_numbers(void);/* loop of display */
void print_line(int n);/* lines */
void print_diagonal(int n);/* diagonal */
void print_square(int size);/* square of # */
void print_triangle(int size);/* triangle of # */
void reset_to_98(int *n);/* reset value */
void swap_int(int *a, int *b);/* swap value */
int _strlen(char *s);/* lenght of string */
void _puts(char *str);/* print the string */
void print_rev(char *s);/* print in reverse */
void rev_string(char *s);/* reverse a string */
void puts2(char *str);/* by 2 */
void puts_half(char *str);/* half of string */
void print_array(int *a, int n);/* print an array */
char *_strcpy(char *dest, char *src);/* copy a string from source to dest */
int _atoi(char *s);/* atoi function */
char *_strcat(char *dest, char *src);/* concatenate */
char *_strncat(char *dest, char *src, int n);/* concat n bytes */
char *_strncpy(char *dest, char *src, int n);/* copy n bytes */
int _strcmp(char *s1, char *s2);/* compare 2 strings */
void reverse_array(int *a, int n);/* reverse an array */
char *string_toupper(char *);/* change lowercase to upercase */
char *cap_string(char *);/* capitalise first letter of each word */
char *leet(char *str);/* replace aeotl by 43071 */
char *_memset(char *s, char b, unsigned int n);/* n fois b at *s */
char *_memcpy(char *dest, char *src, unsigned int n);/* copy n bytes from *src to *dest */
char *_strchr(char *s, char c);/* locate c in *s */
unsigned int _strspn(char *s, char *accept);/* length of prefix substring */
char *_strpbrk(char *s, char *accept);/* searches a string for any of a set of bytes */
char *_strstr(char *haystack, char *needle);/* locates a substring */
void print_chessboard(char (*a)[8]);/* chess */
void print_diagsums(int *a, int size);/*  prints the sum of the two diagonals of a square matrix */


#endif /* MAIN_H */
