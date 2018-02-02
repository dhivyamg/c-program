#include <stdio.h>

int main(void)
{
	int i,n,j,a[45];
	printf("enter the n value");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	scanf("%d",&a[i]);
		printf(" \t%d %d",a[i],i);
	}
	return 0;
}
