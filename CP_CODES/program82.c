#include<stdio.h>

void Pattern(int iNo)
{
    while(iNo >= 1)
    {
        printf("%d # ", iNo);
        iNo--;
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