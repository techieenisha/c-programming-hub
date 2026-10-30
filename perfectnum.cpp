//W.C.P. to check wheather a number is perfect or not
#include<stdio.h>
int main()
{
	int n,i=2,sum=0;
	printf("Enter the value");
	scanf("%d",&n);
	for(i=1;i<n;i++);
	{
		if(n%i==0)
		{
			sum=sum+i;
	    }
		if(sum==n)
		{
			printf("perfect number ");
		}
		else
		{
			printf("not a perfect number");
		}
	}
	return 0;
} 