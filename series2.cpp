/* 1+2+4+7+11+...upto n terms. W.C.P to calculate sum of the given series*/
#include<stdio.h>
int main()
{

	int i=1, sum=0,term=1,diff=1, n;
	printf("Enter the value of term:");
	scanf ("%d",&n);
	while (i<=n)
	{
		sum=sum+term;
		term=term+diff;
		diff++;
		i++;
	}
	printf("sum of the series=%d",sum);
	return 0;
}
