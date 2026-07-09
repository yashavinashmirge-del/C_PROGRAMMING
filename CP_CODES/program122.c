/*

Input :
Enter the character
Q

Output :
q

Input :
m

Output :
M

Input :
4

Output :
4

Input :
%

Output :
%

*/

#include<stdio.h>

void Display(char ch)
{
    if(ch >= 'A' && ch <= 'Z')
    {
        printf("%c\n", ch + 32);
    }
    else if(ch >= 'a' && ch <= 'z')
    {
        printf("%c\n", ch - 32);
    }
    else
    {
        printf("%c\n", ch);
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter the character : ");
    scanf("%c",&cValue);

    Display(cValue);

    return 0;
}