#include <stdio.h>

int main(void) {
	int num;
	printf("enter the num");
	scanf("%d",&num);
	if((num%13)==0)
	{
		printf("\nmultiples of 13");
		
	}
	else
	{
		printf("\nnot multiples of 13");
	}
	return 0;
}
