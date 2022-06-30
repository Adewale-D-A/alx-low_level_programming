#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char str = "Hello";
int num = 1;
long int num2 = 255568;
long long int num3 = 58697;
float flo = 2.55;
printf("Size of a char: %c byte(s)\n", sizeof(str));
printf("Size of an int: %d byte(s)\n", sizeof(num));
printf("Size of a long int: %ld byte(s)\n", sizeof(numb2));
printf("Size of a long long int: %lld byte(s)\n", sizeof(num3));
printf("Size of a float: %f byte(s)\n", sizeof(flo));
return (0);
}
