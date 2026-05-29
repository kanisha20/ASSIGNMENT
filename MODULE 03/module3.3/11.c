#include<stdio.h>
struct emp
{
    int emp_id;
    char emp_name[50];
}e1;
union emp1
{
    int emp_id;
    char emp_name[50];
}e2;
int main(){
    printf("\n enter emp_id:");
    scanf("%d",&e1.emp_id);
    printf("\n enter emp_name:");
    fflush(stdin);
    gets(e1.emp_name);
    
    printf("\n enter emp_id:");
    scanf("%d",&e2.emp_id);
    printf("\n enter emp_name:");
    fflush(stdin);
    gets(e2.emp_name);

    printf("\n ID \t NAME");
    printf("\n %d \t %s", e1.emp_id,e1.emp_name);
    printf("\n %d \t %s", e2.emp_id,e2.emp_name);
}
