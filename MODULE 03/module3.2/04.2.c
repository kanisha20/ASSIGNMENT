#include<stdio.h>
int main(){
    char v;
    printf("enter character : ");
    scanf("%c",&v);
    switch (v)
    {
    case 'A':
    case 'a':
    case 'E':
    case 'e':
    case 'I':
    case 'i':
    case 'O':
    case 'o':
    case 'U':
    case 'u':
        printf("\nit is vowel");    
        break;
    
    default:
        printf("\n it is constant");
        break;
    }
}