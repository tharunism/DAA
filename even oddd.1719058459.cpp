#include<stdio.h>
int main()
{
	int num ;
	scanf("%d",&num);
	if(num==0)
	{
		printf("The given is neither even nor odd");
	}

	else if(num%2==0)
	{
		printf("The given number is even");
	}
	else 
	{
		printf("The given number is odd");
	}
	return 0;
}
