//  Write a program which accept number from user and return the difference between even factorial and odd factorial of that number.
//input : 5
//  output : 8 (2 * 4 = 8) - (5 * 3 * 1 = 15) = -7



#include<stdio.h>

int FactorialDiff(int iNo)
{
    int i = 0;
    int EvenFact = 1;
    int OddFact = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(i = iNo; i >= 1; i--)
    {
        if(i % 2 == 0)
        {
            EvenFact = EvenFact * i;
        }
        else
        {
            OddFact = OddFact * i;
        }
    }

    return (EvenFact - OddFact);
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number: ");
    scanf("%d",&iValue);

    iRet = FactorialDiff(iValue);

    printf("Factorial difference is %d\n",iRet);

    return 0;
}
