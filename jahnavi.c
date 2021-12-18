#include<stdio.h>
void main()
{
	float radius,area,perimeter;
	scanf("%f",&radius);
	area=3.14*radius*radius;
	perimeter=2*3.14*radius;
    printf("area of a circle with %2f is %2f",radius,area);
	printf("\n perimeter of acircle with %2f is %2f",radius,perimeter);
}
