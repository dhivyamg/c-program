#include <stdio.h>

int main(void){
	int n,a,b,c;
	printf("enter the num");
	scanf("%d",&n);
	a=n/10;
	b=a+1;
	c=b*10;
	printf(" nearest 10 multiple is %d",c);

	return 0;
}
