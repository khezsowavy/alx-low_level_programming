#include <stdio.h>
/**
* main - print reverse alphabet
* Return: Always 0
*/
int main(void)
{
char ra;
for (ra = 'z'; ra >= 'a'; ra--)
putchar(ra);
putchar('\n');
return (0);
}
