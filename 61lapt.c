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
	for(i=0;i<k;i++)
	{
		b[i]=a[i];
	}
		printf("%s",b);
	
	
	return 0;
}
