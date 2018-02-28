#include <stdio.h>

int main(void) {
	int a[78],n,i,k;
	scanf("%d",&n);
	printf("k value\n");
	scanf("%d",&k);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(a[i]==k)
		{
			printf("yes");
		}
	}
	
	return 0;
}
