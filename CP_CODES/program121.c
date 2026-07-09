/*

Output :
Displays ASCII table containing
Symbol, Decimal, Hexadecimal and Octal values
from 0 to 255.

*/

#include<stdio.h>

void DisplayASCII()
{
    int i = 0;

    printf("Dec\tHex\tOct\tChar\n");

    for(i = 0; i <= 255; i++)
    {
        printf("%d\t0X%X\t%o\t%c\n", i, i, i, i);
    }
}

int main()
{
    DisplayASCII();

    return 0;
}