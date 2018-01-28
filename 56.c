#include <stdio.h>
#include<string.h>

int main(void) {
	int l,i;
	char a[10]="hello123";
	l=strlen(a);
	for(i=1;i<=l;i++)
	{
	if(((a[i]=='a')||(a[i]=='A'))&&((a[i]=='z')||(a[i]=='Z')))
		printf("string has only alphabets %s",a);
	else
		printf("string has both alphabets and numbers %s",a);
	}
	return 0;
}
