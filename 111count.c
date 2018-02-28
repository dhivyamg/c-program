#include <stdio.h>

int main(void) {
	int num,c=0;
	scanf("%d",&num);
	while(num!=0)
	{
		num=num/10;
		c++;
	}
	printf(" count is %d",c);
	return 0;
}
