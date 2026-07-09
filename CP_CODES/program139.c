/*

Input :
Enter string
Marvellous Multi OS
Enter the character
M

Output :
Character location is 11

Input :
Marvellous Multi OS
Enter the character
W

Output :
Character location is -1

Input :
Marvellous Multi OS
Enter the character
e

Output :
Character location is 4

*/

#include<stdio.h>

int LastChar(char *str, char ch)
{
    int i = 0;
    int iPos = -1;

    while(*str != '\0')
    {
        if(*str == ch)
        {
            iPos = i;
        }

        str++;
        i++;
    }

    return iPos;
}

int main()
{
    char arr[50];
    char cValue;
    int iRet = 0;

    printf("Enter string : ");
    scanf("%[^\n]s", arr);

    printf("Enter the character : ");
    scanf(" %c", &cValue);

    iRet = LastChar(arr, cValue);

    printf("Character location is %d\n", iRet);

    return 0;
}