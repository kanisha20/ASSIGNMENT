#include<stdio.h>
int main() {
    int n, i, num, sum = 0;
    printf("amount of no's ");
    scanf("%d", &n);
    for(i = 1; i <= n; i++) {
        printf("Enter numbers %d: ", i);
        scanf("%d", &num);
        sum = sum + num;
    }
    printf("Sum is = %d", sum);

}