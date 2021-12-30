#include<stdio.h>
#include<math.h>
int isprime(int num)
{
	int i,sq;
	if(num==1)
    {
	    return 0;
	}	
     sq=sqrt(num);
     for(i=2;i<=sq;i++)//29 2 3 4 5
     
     	if(num%i==0)
	    {
	 	    return 0;
	    }
	 return 1;
}
 int main()
{
	int num,avg,res,pp,np;
	scanf("%d",&num);
	res=isprime(num);
	if(res)
	{
		 printf("prime");
		  // we have to check is safe or not 
		  n=num/2;
		  if(isprime(n))
	{
		   printf("not balanced");
	}
	 else
	 {
	 	printf("not a prime");
	 }
     }
}
/*
n=41
2*20+1
*/
