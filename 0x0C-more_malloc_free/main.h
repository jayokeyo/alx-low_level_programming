#ifndef MAIN_H
#define MAIN_H

void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsigned int n);
void *_calloc(unsigned int nmemb, unsigned int size);
int *array_range(int min, int max);
char _putchar(char c);
void print_string(char *s);
void print_digit(int num);
int is_digit(char *num);

#endif /*MAIN_H*/
