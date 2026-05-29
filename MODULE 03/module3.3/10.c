#include<stdio.h>
struct emp
{
    int emp_no,emp_age;
    char emp_name[50],emp_address[70];
};
int main(){
    int i,n;
    printf("how many employee : ");
    scanf("%d",&n);
    struct emp e1[n];
    for (i = 0; i < n; i++)
    {
        printf("\n enter emp_no : ");
        scanf("%d",&e1[i].emp_no);
        printf("\n enter emp_name : ");
        fflush(stdin);
        gets(e1[i].emp_name);
        printf("\n enter emp_age : ");
        scanf("%d",&e1[i].emp_age);
        printf("\n enter emp_address : ");
        fflush(stdin);
        gets(e1[i].emp_address);
    }
    printf("\n ID \t NAME \t AGE \t ADDRESS ");
    for(i=0;i<n;i++)
    {
        printf("\n %d \t %s \t %d \t %s ",e1[i].emp_no,e1[i].emp_name,e1[i].emp_age,e1[i].emp_address);
        
    }
}
