#include <stdio.h>
#include<string.h>

int main(void) {
	char a[100]="hello hai";
	 int i,count=0;
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]==' ')
			count++;
	}
	printf("NO. OF SPACE %d",count);
	return 0;
}
