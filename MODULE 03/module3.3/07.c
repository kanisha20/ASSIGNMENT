#include<stdio.h>
int main()
{
    char str[100];
    int i, length = 0;
    printf("Enter : ");
    gets(str);
    for(i = 0; str[i] != '\0'; i++)
    {
        length++;
    }
    printf("Length of string = %d", length);
}