#include <stdio.h>
/**
 *  * Description: main - A program that prints the size of various types on the computer it is compiled and run on
 *  * Return: 0 if success.
 */
int main(void)
{
char a;
int b;
long int c;
long long int d;
float e;
printf("Size of a char: %ld byte(s)\n", sizeof(a));
printf("Size of a int: %ld byte(s)\n", sizeof(b));
printf("Size of a long int: %ld byte(s)\n", sizeof(c));
printf("Size of a long long int: %ld byte(s)\n", sizeof(d));
printf("Size of a float: %ld byte(s)\n", sizeof(e));
return (0);
}
