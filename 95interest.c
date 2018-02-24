#include <stdio.h>

int main(void)
{
	float amount,rate,time,interest;
	printf("amount,rate,time\n");
	scanf("%f%f%f",&amount,&rate,&time);
	interest=(amount*rate*time)/100;
	printf("%f",interest);
	
	return 0;
}
