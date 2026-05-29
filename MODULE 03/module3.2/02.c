#include<stdio.h>
int main(){
    int a,b;
    printf("enter 2 no. :");
    scanf("%d %d",&a,&b);
    printf("before swap:");
    printf("\n a=%d",a);
    printf("\n b=%d",b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("\n after swap:");
    printf("\n a=%d",a);
    printf("\n b=%d",b);   
}