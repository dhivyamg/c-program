#include <stdio.h>

int main(void) {
	int n;
	printf("enter the num\t");
	scanf("%d",&n);
	while(n%2==0)
	{
		n=n/2;
		if(n%2==1)
		break;
	}
	printf("%d",n);
	return 0;
}
