//  Write a program which accept number from user and display first 5 multiples of that number.
//input : 4
//  output : 4	8	12	16	20    




#include<stdio.h>

void MultipleDisplay(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(int iCnt = 1; iCnt <= 5; iCnt++)
    {
        printf("%d\t",iNo*iCnt);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    MultipleDisplay(iValue);

    return 0;
}