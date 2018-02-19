#include <stdio.h>
#include<string.h>
int main(void) {
	char s[56];
	int i,l,a;
	printf("enter the string\n");
	scanf("%s",s);
	l=strlen(s);
	for(i=0;i<l;i++)
	{           a=i+1;
		if(a%2==1)
		printf("%c",s[i]);
	}
	printf("\n");
	for(i=0;i<l;i++)
	{
		a=i+1;
	if(a%2==0)
	
	printf("%c",s[i]);
	}
	return 0;
}
