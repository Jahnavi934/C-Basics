#include<stdio.h>
void main()
{
	int length,width,area,perimeter;
	printf("enter two numbers");
	scanf("%d%d",&length,&width);
	area=length*width;
	perimeter=2*(length+width);
	printf("area of rectangle with length %d and width %d",length,width,area);
	printf("perimeter of a rectangle with length %d and width %d is %d",length,width,perimeter);
}
