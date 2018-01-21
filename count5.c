#include<stdio.h>
int main()
{
int a,count=0;
printf("enter the no.");
scanf("%d",&a);
while(a!=0)
{
a=a/10;
++count;
}
printf("count%d",count);
return 0;
}
	
