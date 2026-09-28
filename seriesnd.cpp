/* 2+5+8+11+14+...upto n terms. W.C.P to calculate sum of the given series*/
#include<stdio.h>
int main()
{

	int i=1, sum=0,term=2, n;
	printf("Enter the value of term:");
	scanf ("%d",&n);
	while (i<=n)
	{
		sum=sum+term;
		term=term+3;
		i++;
	}
	printf("sum of the series=%d",sum);
	return 0;
}
