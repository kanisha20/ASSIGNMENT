#include<stdio.h>
struct emp
{
    int emp_no,emp_age;
    char emp_name[50],emp_address[70];
}e1;

int main(){
    printf("\n enter emp no : ");
    scanf("%d",&e1.emp_no);
    printf("\n enter emp name : ");
   fflush(stdin);
   gets(e1.emp_name);
    printf("\n enter emp address : ");
    fflush(stdin);
   gets(e1.emp_address);
    printf("\n enter emp age : ");
    scanf("%d",&e1.emp_age);
    printf("\n ID \t Name \t Address \t AGE");
    printf("\n %d \t %s \t %s \t %d",e1.emp_no,e1.emp_name,e1.emp_address,e1.emp_age);
}