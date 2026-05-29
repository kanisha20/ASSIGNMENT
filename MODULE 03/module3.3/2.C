#include<stdio.h>
int main(){
    int a,b,ch;
    printf("\n ENter 2 no:");
    scanf("%d %d",&a,&b);
    printf("\n1.Addition\n2.Minus\n3.Multiply\n4.Division");
    printf("\n ENter your choice:");
    scanf("%d",&ch); 
    switch(ch){
        case 1: printf("\n Addition is %d",a+b);
                break;
        case 2: printf("\n Minus is %d",a-b);
                break;
        case 3: printf("\n Multiply is %d",a*b);
                break;
        case 4: printf("\n Division is %d",a/b);
                break;
        default: printf("\n Invalid choice..");
                 break;
    }
}