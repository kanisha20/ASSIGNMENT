#include<stdio.h>
int main()
{
    int n,i,max;
    printf("enter array size ");
    scanf("%d",&n);
    int arr[n];
    printf("\n enter %d elements",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("\n you entered alements are \n");
    max=arr[0];
    for(i=0;i<n;i++)
    {
        if(arr[i]>max){
            max=arr[i];
        }
    }
        printf("\n max num is %d",max);
    
}