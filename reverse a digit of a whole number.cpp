//w.c.p to reverse a digit of a whole number
#include<stdio.h>
int main()
{
	int count=0,n,digit;
	printf("Enter a whole number:");
	scanf("%d",&n);
	while(n!=0)
	{
		digit=n%10;
		printf("%d\n",digit);
		count++;
		n=n/10;	
	}
	printf("number of digits=%d",count);
	return 0;
}