#include <stdio.h>
#include<string.h>
int main(void)
{
char a[89],b[66];
int i,l,flag;
printf("enter the string");
scanf("%s",a);
l=strlen(a);
for(i=0;i<5;i++)
{
	if(a[i]==a[l-i-1])
	{
		flag=1;
		break;
	}
}
if(flag==1)
{
	printf("palindrome");
}
else
{
	printf("not palindrome");
}
	return 0;
}
