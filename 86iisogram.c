#include <stdio.h>
#include<string.h>

int main(void) {
	char a[10];
	int i,l,j,c=0;
	
	scanf("%s",a);
	l=strlen(a);
	for(i=0;i<l;i++)
	{
		for(j=i+1;j<l;j++)
		{
			if(a[i]==a[j])
			{
				c++;
			}
		}
	}
	if(c>0)
	printf("not isogram");
	else
	printf("isogram");
	return 0;
}
