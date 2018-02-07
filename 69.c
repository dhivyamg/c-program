#include <stdio.h>

int main(void) {
	int a,b,c;
	printf("enter two num");
	scanf("%d%d",&a,&b);
	c=a-b;
	if((c%2)==0)
	{
		printf("even num");
	}
	else
	{
		printf("odd num");
	}
	return 0;
}
