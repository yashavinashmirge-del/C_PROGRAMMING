/*

Input :
Enter number of rows and columns
6 6

Output :
* * * * * *
* * *
* * *
* * *
* * *
* * * * * *

*/

#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i,j;

    for(i=1;i<=iRow;i++)
    {
        if(i==1 || i==iRow)
        {
            for(j=1;j<=iCol;j++)
            {
                printf("* ");
            }
        }
        else
        {
            for(j=1;j<=3;j++)
            {
                printf("* ");
            }
        }
        printf("\n");
    }
}

int main()
{
    int iValue1=0,iValue2=0;

    printf("Enter number of rows and columns : ");
    scanf("%d%d",&iValue1,&iValue2);

    Pattern(iValue1,iValue2);

    return 0;
}