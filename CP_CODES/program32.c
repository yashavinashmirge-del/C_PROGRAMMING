//  Write a program which accept number from user and convert it into INR.
//input : 10
//  output : 700

//  input : 3
//  output : 270


#include<stdio.h>

int DollarToINR(int iNo)
{
    return iNo * 70;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number of USD: ");
    scanf("%d",&iValue);

    iRet = DollarToINR(iValue);

    printf("Value in INR is %d\n",iRet);

    return 0;
}