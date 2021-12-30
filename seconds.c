#include<stdio.h>
void main()
{
	int time,hrs,mins,sec;
	scanf("%d",&time);
	hrs=time/3600;
	mins=(time%3600)/60;
	sec=(time%3600)%60;
	printf("time of hrs %d and mins %d and secs%d is %d",hrs, mins,sec);
}
