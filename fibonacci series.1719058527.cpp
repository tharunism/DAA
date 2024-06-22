#include<stdio.h>
int main()
{
	int a,b,i,n,c;
	a=0;
	b=1;
	printf("Enter the value of n:",n);
	scanf("%d",&n);
	c=a+b;
	printf("fibonacci series:%d\t,%d\t",a,b);
	for (i=3;i<=n;i++)
	{
		printf("%d\t",c);
		a=b;
		b=c;
		c=a+b;
	}
	return 0;
}

