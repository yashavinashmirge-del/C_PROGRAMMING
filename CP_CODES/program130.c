/*

Input :
Enter string
MarvellouS

Output :
SuollevraM

*/

#include<stdio.h>

void Reverse(char *str)
{
    int iLength = 0;
    int i = 0;

    while(str[iLength] != '\0')
    {
        iLength++;
    }

    for(i = iLength - 1; i >= 0; i--)
    {
        printf("%c", str[i]);
    }

    printf("\n");
}

int main()
{
    char arr[50];

    printf("Enter string : ");
    scanf("%[^\n]s", arr);

    Reverse(arr);

    return 0;
}