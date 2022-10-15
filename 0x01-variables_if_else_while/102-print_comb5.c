#include <stdio.h>
/**
* main - Entry
* Return: Always 0
*/
int main(void)
{
int main(void)
{
int c = 0;
int f_d;
int l_d;
int d_a;
int b_a;
while (c <= 99)
{
f_d = (c / 10 + '0');
l_d = (c % 10 + '0');
b_a = (c / 10 + '0');
d_a = (c % 10 + '0');
if (f_d < l_d)
{
putchar(f_d);
putchar(l_d);
if (c != 89)
{
putchar(',');
putchar(' ');
}
if (b_a < f_d)
{
putchar(' ');
}
if (d_a < l_d)
putchar(' ');
}
c++;
}
putchar('\n');
return (0);
}
