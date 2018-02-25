#include <stdio.h>
#include<string.h>
int main(void) {
     int i,l,n;
     char a[67];
	printf("enter the string\n");
	scanf("%s",a);
	printf("enter the last n value want to print\n");
	scanf("%d",&n);
	l=strlen(a);
	for(i=l-n;i<=l;i++)
	{
		printf("%c",a[i]);
	}
	
	return 0;
}
