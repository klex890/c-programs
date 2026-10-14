#include <stdio.h>
int main()
{
	int num;
	
	printf("Enter a number : ");
	scanf("%d", &num);
	
	if ( num > 0)
	{
		if (num % 2 == 0)
		{
		printf("Postive Even number");
		}
		else
		{
			printf("Postive Odd Number");
		}
	}
	else
	{
		printf("Not a Postive Number");
	}
	return 0;
}
