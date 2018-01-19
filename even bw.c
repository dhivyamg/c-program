#include <stdio.h>

int main() {
	int i;
	printf("enter the even number b/w 1to 9:\n");
	for(i=1;i<=9;i++)
	{
		if(i%2==0)
		{
			printf("%d",i);
		}
	}
	return 0;
}
