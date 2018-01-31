#include <stdio.h>

int main(void)
{
	int a,i,sum=0, d=1,n;
	printf("enter the n value ");
	scanf("%d",&n);
	printf("enter the starting value");
	scanf("%d",&a);
	for(i=1;i<=n;i++)
	{
	sum=sum+a;
	a=a+d;
	}
	printf("%d",sum);

	return 0;
}
