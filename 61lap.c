#include <stdio.h>
#include<string.h>
int main(void)
{
	char a[37],b[69];
	int i,k;
	printf("enter the string");
	scanf("%s",a);
	printf("enter the k values");
	scanf("%d",&k);
	for(i=1;i<=k;i++)
	{
		a[i]=b[i];
		printf("%s",a);
	}
	
	return 0;
}
