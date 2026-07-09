#include<stdio.h>

void Pattern(int iNo)
{
    int i = 1;

    while(i <= iNo)
    {
        printf("# %d * ", i);
        i++;
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number of elements: ");
    scanf("%d", &iValue);

    Pattern(iValue);

    return 0;
}