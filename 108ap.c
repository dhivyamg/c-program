#include <stdio.h>

int main(void) {
	int f,d,i,count,sum=0;
	printf("enter the values\n");
	scanf("%d%d%d",&f,&d,&count);
	for(i=1;i<=count;i++)
	{
		sum=sum+f;
		f=f+d;
		
	}printf("sum of ap is %d",sum);
	return 0;
}
