#include <stdio.h>

int main(void) {
	int n,a,i,sum=0;
	printf("enter the n value\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a);
		sum=sum+a;
	}printf("%d",sum);
	return 0;
}
