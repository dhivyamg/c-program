#include <stdio.h>

int main(void) {
	int num,exponent,power=1,i;
	printf("enter the num\n");
	scanf("%d",&num);
	printf("exponent is\n");
	scanf("%d",&exponent);
	for(i=1;i<=exponent;i++)
	{
		power=power*num;
	}
	printf(" power is%d",power);
	return 0;
}
