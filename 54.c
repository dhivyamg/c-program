#include <stdio.h>

int main(void) {
	int a;
	printf("enter the no.");
	scanf("%d",&a);
	if((a%2==0))
	{
		printf("the nearest even no is %d",(a-2));
		
	}
	else
	{
		printf("the nearest even no is %d",(a-1));
	}
	return 0;
}
