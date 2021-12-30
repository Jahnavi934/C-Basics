#include<stdio.h>
int main()
{
	int x,y,a,n,l,s;
	scanf("%d%d",&x,&y);
	n=y/x;
	a=x;
	l=n*a;
	s=(n*(a+l))/2;
	printf("%d",s);
}
    
