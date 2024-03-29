#ifndef MAIN_H
#define MAIN_H

int _putchar(char c);
char *create_array(unsigned int size, char c);
char *_strdup(char *str);
char *str_concat(char *s1, char *s2);
int **alloc_grid(int width, int height);
void free_grid(int **grid, int height);
unsigned int len(char *s);
char *argstostr(int ac, char **av);
int wrd_count(char *sw);
char *rmspace(char *st);
char **strtow(char *str);
#endif /* MAIN_H */
