#include <stdio.h>

int main(void) {
	int max,i,n,a[30];
	printf("enter the n value");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
	max=a[0];
	for(i=1;i<=n;i++)
	{
		if(a[i]>max)
	{
		max=a[i];
	}
	}
	printf("max value is %d",max);
	return 0;
}
