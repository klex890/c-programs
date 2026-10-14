#include <stdio.h>
int main()
{
	int n;
	
	printf("Enter a Number (1-5) : ");
	scanf("%d" , &n);
	
	switch (n)
	{
		case 1:
		printf("Monday");
		break;
		case 2:
		printf("Tuesday");
		break;
		case 3:
		printf("Wenesday");
		break;
		case 4:
		printf("Thursday");
		break;
		case 5:
		printf("Friday");
		break;
		default:
		printf("Holiday");
	}
	return 0;
}
		
