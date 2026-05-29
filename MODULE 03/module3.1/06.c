#include<stdio.h>

int main()
{
    int y,d;
    printf("Enter number of year: ");
    scanf("%d", &y);
    d = y * 365;
    printf("%d years = %d days\n", y, d);
    
    printf("\nEnter number of day: ");
    scanf("%d", &d);
    y = d / 365;
    printf("%d days = %d years", d, y);
}