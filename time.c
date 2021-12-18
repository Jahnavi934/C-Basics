#include<stdio.h>
void main()
{
	int min,hour,t;
	printf("enter the min");
	scanf("%d",&t);
	min=t/60;
	hour=t%60;
	printf("given time in mins is %d in hours is %d and in minutes is%d",t,min,hour);
	
}
