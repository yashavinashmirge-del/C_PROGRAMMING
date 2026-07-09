
/*
iRow = 4
iCol = 5

2 4 6 8 10
1 3 5 7 9
2 4 6 8 10
1 3 5 7 9



*/





#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i, j;

    for(i = 1; i <= iRow; i++)
    {
        if(i % 2 == 1)
        {
            for(j = 1; j <= iCol; j++)
            {
                printf("%d ", j * 2);
            }
        }
        else
        {
            for(j = 1; j <= iCol; j++)
            {
                printf("%d ", (j * 2) - 1);
            }
        }

        printf("\n");
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &iValue1, &iValue2);

    Pattern(iValue1, iValue2);

    return 0;
}