#include<stdio.h>
int main() {
	int r,n,h=0;
	printf("enter the no.");
	scanf("%d",&n);
	while(n!=0)
	{
		r=n%10;
		h=h*10+r;
		n=n/10;
	}
	if(n==h)
	printf("palindrome no%d");
	else
	printf("not palindrome no %d");

	return 0;
}
