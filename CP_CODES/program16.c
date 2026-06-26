/*
Input : 12
Factors : 1 2 3 4 6
Output : 144
(1 × 2 × 3 × 4 × 6 = 144)

Input : 13
Factors : 1
Output : 1

Input : 10
Factors : 1 2 5
Output : 10



Problem Statement

Write a function that accepts an integer from the user and returns the multiplication of all its factors (excluding the number itself).

*/
#include<stdio.h>

int MultFact(int iNo)
{
    int i = 0;
    int iMult = 1;

    // Convert negative number to positive
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(i = 1; i <= (iNo / 2); i++)
    {
        if((iNo % i) == 0)
        {
            iMult = iMult * i;
        }
    }

    return iMult;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    iRet = MultFact(iValue);

    printf("Multiplication of factors is : %d\n",iRet);

    return 0;
}