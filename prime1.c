include<stdio.h>
int main()
{
	int j,a,flag=0;
	scanf("%d",&a);
	for(j=2;j<=a;j++)
	{
		if(a%j==0)
		{
			flag=1;
			break;
		}
	}
	if(flag==0)
	{
		printf("not prime no.%d",a);
	}
	else
	{
		printf("prime no.%d",a);
	}
	return 0;
}
