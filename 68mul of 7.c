#include <stdio.h>

int main(void) {
	int n;
	printf("enter the num");
	scanf("%d",&n);
	if((n%7)==0)
	{
		printf("it is multiple of 7");
	}
	else
	{
		printf("not multiple of 7");
	}
	return 0;
}
