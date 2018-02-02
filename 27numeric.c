
#include <stdio.h>

int main() {
	char ch;
	printf("enter the letter");
	scanf("%c",&ch);
	if(ch>='a' && ch<='z')
	printf("%c not numeric",ch);
	else
	printf("%c numeric",ch);
	return 0;
}
