#include<stdio.h>
int main()
{
    int no,r,n,rev=0;
    printf("\nEnter no:");
    scanf("%d",&no);
    n=no;
    while (no>0)
    {
        r=no%10;
        rev=(rev*10)+r;
        no=no/10;
    }
    printf("\n reverse no is %d",rev);
    if (n==rev)
    {
        printf("\n it is palindrom no");
    }
    else {
        printf("\n it is not palindrom no");
    }
}