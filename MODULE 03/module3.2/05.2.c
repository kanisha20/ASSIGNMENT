#include<stdio.h>
int main(){
    int i,num,even=0,e=0,odd=0,o=0;
    printf("enter no. : ");    
    for(i=1;i<=10;i++)
    {
        scanf("%d",&num);

        if (num%2==0)
        {
            even++;
            e=e+num;
        }
        else{
            odd++;
            o=o+num;
        }
    }
    printf("\neven no are:%d",even);
    printf("\nodd no are:%d",odd);
    printf("\nsum of even:%d",e);
    printf("\nsum of odd:%d",o);
}