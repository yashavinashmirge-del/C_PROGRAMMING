//  Write a program which accept number from user and display  all odd numbers.
//input : 18
//  output : 1	3	5	7	9	11	13	15	17





#include<stdio.h>

void OddDisplay(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(int iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if (iCnt % 2 != 0)
        {
            printf("%d\t",iCnt);
        }
    }
}
int main()
{
    int iValue = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    OddDisplay(iValue);

    return 0;
}