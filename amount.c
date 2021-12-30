#include<stdio.h>
void main()
{
	int amount,a,b,c,d,e,f,g,h,i,j;
	scanf("%d",&amount);
	a=amount/2000;
	b=amount%2000/500;
	c=amount%2000%500/200;
	d=amount%2000%500%200/100;
    e=amount%2000%500%200%100/50;
    f=amount%2000%500%200%100%50/20;
    g=amount%2000%500%200%100%50%20/10;
    h=amount%2000%500%200%100%50%20%10/5;
    i=amount%2000%500%200%100%50%20%10%5/2;
    j=amount%2000%500%200%100%50%20%10%5%2/1;
    printf("amount of %d and a %d and b %d and c %d and d %d and e %d and f %d and g %d and h %d and i %d and j %d is %d",a,b,c,d,e,f,g,h,i,j);	
}
