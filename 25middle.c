#include <stdio.h>

int main(void) {
	int a[50],i,j,n,k,h,temp;
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
	k=n/2;
	if((n%2)==0)
	{
		h=k+1;
		printf("middle is %d",a[h]);
	}
	else
	{
	
		
	printf("middle element is %d",a[k+1]);
	}
	return 0;
}
