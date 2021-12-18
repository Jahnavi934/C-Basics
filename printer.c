#include<stdio.h>
void main()
{
 float p,i,t,r;
 printf("enter the p");
 scanf("%f",&p);
 printf("enter the t");
 scanf("%f",&t);
 printf("enter the r");
 scanf("%f",&r);
 i=p*t*r/100;
 printf("intrest of principle %.2f time %.2f rate %.2f is %.2f",p,t,r,i);
}
