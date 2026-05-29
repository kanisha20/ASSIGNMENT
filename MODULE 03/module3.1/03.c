#include<stdio.h>
int main(){
    float r,l,w,h,c,t,b;
    printf("enter redius for circle");
    scanf("%f",&r);
    c=3.14*r*r;
    printf("enter length and width for rectangle:");
    scanf("%f %f",&l,&w);
    r=l*w;
    printf("enter base and height for triangle");
    scanf("%f %f",&b,&h);
    t=0.5*b*h;
    printf("\n area of circle:%f",c);
    printf("\n area of rectangle:%f",r);
    printf("\n area of triangle:%f",t);
}