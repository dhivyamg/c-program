#include <stdio.h>

int main() {
	int i,a,b;
	printf("enter the odd number b/w ato b:\n");
	scanf("%d%d",&a,&b);
	for(i=1;i<=9;i++)
	{
		if(i%2==1)
		{
			printf("%d\n",i);
		}
	}
	return 0;
}
