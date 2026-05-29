#include<stdio.h>
#include<string.h>
int main()
{
    char str[50], rev[50];
    int i, len = 0;
    printf("Enter a string: ");
    gets(str);
    while(str[len] != '\0')
    {
        len++;
    }
    for(i=0; i<len; i++)
    {
        rev[i] = str[len - i - 1];
    }
    rev[i] = '\0';
    printf("\nReverse string is: %s", rev);
    if(strcmp(str, rev) == 0)
    {
        printf("\nPalindrome");
    }
    else
    {
        printf("\nNot Palindrome");
    }
}