//  Write a program which accept number from user and return the even factorial of that number.
//input : 5
//  output : 15 (5 * 3 * 1 = 15)


#include<stdio.h>

int OddFactorial(int iNo)
{
    int i = 0;
    int iFact = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(i = iNo; i >= 1; i--)
    {
        if(i % 2 != 0)
        {
            iFact = iFact * i;
        }
    }

    return iFact;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number: ");
    scanf("%d",&iValue);

    iRet = OddFactorial(iValue);

    printf("Odd Factorial of number is %d\n",iRet);

    return 0;
}