#include <stdio.h>
void main()
{
	int a,b,c;
	printf("enter the no");
	scanf("%d %d %d",&a,&b,&c);
	if(a>b && a>c)
	printf("a  is largest%d",a);
	else if(b>c)
	printf("b is largest%d",b);
	else
	printf("c is largest%d",c);
	return 0;
}

