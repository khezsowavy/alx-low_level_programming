#include <stdio.h>
/**
* main - print hexadecimals
* Return: Always 0
*/
int main(void)
{
int num;
char hx;
for (num = 0; num < 10; num++)
putchar((num % 10) + '0');
for (hx = 'a');
hx <= 'f';
{
putchar(hx);
hx++;
}
putchar('\n');
return (0);
}
