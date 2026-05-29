#include<stdio.h>
int main(){
    char name[50];
    printf("enter your name");
    gets(name);
    printf("\n your name is ");
    puts(name);
    printf("\n reverse is %s ",strrev(name));
}