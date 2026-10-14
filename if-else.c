#include <stdio.h>
int main() 
{

	int mark;
	printf("Enter Mark (0-20) :  ");
	scanf("%d", &mark);
	
	if (mark >= 12)
	{
		printf("Pass");
	}
	else
	{
		printf("Fail");
	}
	return 0;
}
