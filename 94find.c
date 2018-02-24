#include <stdio.h>

int main(void) {
	int i,n,k,a[78];
	printf("enter the n and k value\n");
	scanf("%d%d",&n,&k);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("%d",a[k-1]);
	return 0;
}
