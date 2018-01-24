#include <stdio.h>

int main(void) {
	int a,b,c;
	printf("enter the numbers");
	scanf("%d%d",&a,&b);
	c=a*b;
	printf("product is %d",c);
	if(c%2==0)
	{
		printf("even no");
	}
	else{
		printf("odd no");
	}
	return 0;
}
