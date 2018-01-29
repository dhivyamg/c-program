#include <stdio.h>

int main(void) {
	int a,b,c;
	printf("enter the time");
	scanf("%d",&c);
	a=c/60;
	b=c%60;
	printf("%dhours %dmin",a,b);
	return 0;
}
