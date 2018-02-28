#include <stdio.h>

int main(void) {
	int a[8],n,i,k,c=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("k values");
	scanf("%d",&k);
	for(i=0;i<n;i++)
	{
	if(a[i]%2==1)
	{
		c++;
		if(c==k)
		{
			printf("%d",a[i]);
		}
	}
	}
	return 0;
}
