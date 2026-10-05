//w.c.p to count a digit of a whole number
#include<stdio.h>
int main()
{
	int count=0,n;
	printf("Enter a whole number:");
	scanf("%d",&n);
	while(n!=0)
	{
		n=n/10;
		count++;
	}
	printf("number of digits=%d",count);
	return 0;
}
 