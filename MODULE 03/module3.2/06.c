#include<stdio.h>
int main(){
    int no,f=1,i;
    printf("enter no:");
        scanf("%d",&no);
        for(i=1;i<=no;i++)
        {
            f=f*i;
        }
        printf("\n factorial is %d",f);
}