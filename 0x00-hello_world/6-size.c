#include <stdio.h>
/**
 * mani - A program that prints the size of various computer types
 * return 0 (success)
 */
int main(void)
{
char a;
int b;
long int c;
long long int d;
float f;

printf("Size of a char: %lu byte(s)\n", (unsigned long)sizsof(a));
printf("Size of a char: %lu byte(s)\n", (unsigned long)sizsof(b));
printf("Size of a char: %lu byte(s)\n", (unsigned long)sizsof(c));
printf("Size of a char: %lu byte(s)\n", (unsigned long)sizsof(d));
printf("Size of a char: %lu byte(s)\n", (unsigned long)sizsof(f));
return (0);
}
