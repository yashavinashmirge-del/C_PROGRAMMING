// Print numbers 5 to 1
#include<stdio.h>

void Display()
{
    int i = 5;

    while(i >= 1)
    {
        printf("%d\n", i);
        i--;
    }
}

int main()
{
    Display();

    return 0;
}