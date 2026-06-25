//Print first N even numbers
#include<stdio.h>

void PrintEven(int iNo)
{
    int i = 1;

    if(iNo <= 0)
    {
        return;
    }

    for(i = 1; i <= iNo; i++)
    {
        printf("%d ", i * 2);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    PrintEven(iValue);

    return 0;
}