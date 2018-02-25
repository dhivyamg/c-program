#include <stdio.h>

int main(void) {
	int n,i,a[10];
	printf("enter the n value");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
		if(a[i]!=i)
		{
			printf("%d",i);
			break;
		}
	}
	return 0;
}
