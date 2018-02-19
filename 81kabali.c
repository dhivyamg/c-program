#include <stdio.h>

int main(void) {
	int n,a[324],b[45],c[67],i;
	printf("no. of lines");
	scanf("%d",&n);
	printf("kabalies ninja number and opponent ninja num\n");
	for(i=0;i<n;i++)
	{
		scanf("%d%d",&a[i],&b[i]);
		c[i]=b[i]-a[i];
		printf("\n%d",c[i]);
	}
	return 0;
}
