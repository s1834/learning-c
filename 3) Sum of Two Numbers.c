#include <stdio.h>

int main()
{
	int x=0, y=0, sum=0;

	printf("Enter First Number: ");
	scanf("%d",&x);
	printf("\nEnter Second Number: ");
	scanf("%d",&y);

	sum= x+y;
	printf("\nSum of 2 Numbers is: %d",sum);

	return 0;
}