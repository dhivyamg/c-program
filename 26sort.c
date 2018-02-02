#include <stdio.h>

int main(void) {
	int a[50],i,j,n,temp;
	printf("enetr the n value");
	scanf("%d",&n);
	for(j=1;j<=n;j++)
	{
		scanf("%d",&a[j]);
	}
	for(j=1;j<=n;j++)
	{
		for(i=j+1;i<=n;i++)
		{
		if(a[j]>a[i])
		{
			temp=a[j];
			a[j]=a[i];
			a[i]=temp;
		}
		}
	}
	for(j=1;j<=n;j++)
	{
	printf(" %d",a[j]);
	}
	return 0;
}
