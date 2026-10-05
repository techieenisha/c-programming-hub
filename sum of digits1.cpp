//W.C.P. to calculate sum of digits

#include<stdio.h>
int main()
{
	int digit,n,sum=0;
	printf("Enter the value of n: ");
	scanf("%d",&n);
	while (n>0)
	{
		digit=(n%10);
		sum=sum+digit;
		n=n/10;
	}
	printf("sum of digits=%d",sum);
	return 0;
}