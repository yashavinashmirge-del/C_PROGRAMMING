/*
Input : 12
Output : 6 4 3 2 1

Input : 13
Output : 1

Input : 10
Output : 5 2 1


Problem Statement

Write a program which accepts a number from the user and displays its factors in decreasing order.

*/

#include<stdio.h>

void FactRev(int iNo)
{
    int i = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(i = iNo / 2; i >= 1; i--)   // Loop from half of the number to 1 for decreasing order of factors
    {
        if((iNo % i) == 0)
        {
            printf("%d ", i);
        }
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d", &iValue);

    FactRev(iValue);

    return 0;
}