#include <stdio.h>

int main(void) {
	int n,r,sum;
	printf("enter the num\n");
	scanf("%d",&n);
	while(n!=0)
	{
		r=n%10;
		sum=sum*10+r;
		n=n/10;
	}
	printf("\n reversed num is%d",sum);
	return 0;
	
}
