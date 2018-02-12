#include <stdio.h>

int main(void) {
	int num,i;
	printf("enter the num");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		if((num%i)==0)
		{
		
			printf("\t%d",i);
		}
	}
	return 0;
}
