#include <stdio.h>

int main(void) {
	int n,a,b;
	printf("enter the num");
	scanf("%d",&n);
	printf("enter the range");
	scanf("%d%d",&a,&b);
	if((n>a)&&(n<b))
	{
		printf("with in the range");
	}
	else
	{
		printf("\nnot with in the range");
	}
	return 0;
}
