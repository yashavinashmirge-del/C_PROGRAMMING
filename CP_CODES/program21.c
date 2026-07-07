
//  Write a program which accept number from user and display below pattern.

//input : 5
//  output : $	*	$	*	$	*	$	*	$	*


#include<stdio.h>

void Pattern(int iNo)
{
     
     if(iNo < 0)
    {
        iNo = -iNo;


    }


    for(int iCnt = 1; iCnt <= iNo*2; iCnt++)
    {
        if (iCnt % 2 != 0)
        {
            printf("$\t");
        }
        else
        {
            printf("*\t");
        }
    }
 
}
int main()
{
    int iValue = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    Pattern(iValue);

    return 0;
}