#include <stdio.h>

int main(void) {
	int temp;
	printf("enter the temperature in celsius\n");
	scanf("%d",&temp);
	temp=temp+273;
	printf("%d",temp);
	return 0;
}
