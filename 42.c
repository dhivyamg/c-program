#include <stdio.h>
#include<string.h>
int main(void) {
	int c,d;
	char a[37]="hello",b[54]="hai";
	c=strlen(a);
	d=strlen(b);
	printf("length is %d%d",c,d);
if(c>d)
	{
		printf("%s",a);
	}
	else if(c<d)
	{
		printf("%s",b);
	}
	else
	{
		printf("%s",a);
	}
	
	
	return 0;
}
