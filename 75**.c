#include <stdio.h>
#include<string.h>
int main(void)
{
	char a[67];
	int l,k;
	int middle;
	printf("enter the element");
	scanf("%s",a);
	l=strlen(a);
	

	if(l%2==1)
	{
		k=l/2;
		middle=k+1;
		a[middle-1]='*';
		printf("%s",a);
	}
	else
	{
		k=l/2;
		middle=k;
		a[middle-1]='*';
		
	a[middle]='*';
printf("\n%s",a);
	}
	
	
	return 0;
}
