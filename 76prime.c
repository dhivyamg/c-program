#include <stdio.h>

int main(void) {
	int i,n;
	printf("enter the num");
	scanf("%d",&n);
	for(i=2;i<=n;i++)
	{
		if((n%i)==0)
		{
			break;
		}}
		if(n==i)
		printf("\nprime num");
		else
		printf("\ncomposite num");
	
	return 0;
}
