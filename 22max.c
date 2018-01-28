#include <stdio.h>

int main(void) {
	int max,i,n,b[30];
	printf("enter the n value");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&b[i]);
	}
	max=b[0];
	for(i=1;i<=n;i++)
	{
		if(b[i]>max)
	{
		max=b[i];
	}
	}
	printf("max value is %d",max);
	return 0;
}
