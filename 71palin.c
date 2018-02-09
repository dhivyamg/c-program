#include <stdio.h>
#include<string.h>
int main(void) {
	char a[45],b[34];
	int l,i;
	printf("enter the string");
	scanf("%s",a);
	l=strlen(a);
	for(i=l-1;i>=0;i--)
	{
		b[l-i-1]=a[i];
	}
	if(strcmp(a,b)==0)
	{
		printf("palindrome");
	}
	else
	{
		printf("not palindrome");
	}
	
	
	
	return 0;
}
