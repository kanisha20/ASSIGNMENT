#include<stdio.h>
int main() {
    int num, f, l;
    printf("Enter a number: ");
    scanf("%d", &num);
    l = num % 10;  
    while(num >= 10) {
        num = num / 10;
    }
    f = num;   
    printf("Sum of first and last digit = %d", f + l);
}