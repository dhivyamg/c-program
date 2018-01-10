#include <stdio.h>

int main() {
	int a,count=0;
	printf("enter the no.");
	scanf("&d",&a);
	while(a!=0)
	{
		a=a/10;
		++count;
	}
	printf("no of digits%d",count);
	return 0;
}
