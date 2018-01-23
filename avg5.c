#include <stdio.h>

int main() {
	int i,n,sum=0,a[10],avg;
	printf("enter the number");
	scanf("%d",&n);
	printf("enter the array");
	for(i=0;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<=n;i++)
	{
		sum=sum+a[i];
	}
	avg=sum/2;
	printf("avg is %d");
	return 0;
}
