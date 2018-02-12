#include <stdio.h>

int main(void) {
	int a,b,k,h,i;
	printf("enter the  2 num");
	scanf("%d%d",&a,&b);
	k=a*b;
	for(i=1;i<=k;i++)
	{
	h=(i*i);
	if(k==h)
	{
		break;
	}
	
	}
	
	if(k==h)
	printf("\n perfect square");
	
	else
	printf("\nnot perfect square");
	
	
	return 0;
}
