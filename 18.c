#include <stdio.h>

int main(void) {
	int a,i,rem=0,d,b;
	printf("enter the range1");
	scanf("%d",&a);
	printf("enter the range 2");
	scanf("%d",&b);
	for(i=a;i<=b;i++)
	{
		d=a%10;
		rem=rem+d*d*d;
		a=a/10;
		printf("the arms no is %d",rem);
	}
	return 0;
}
