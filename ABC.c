#include <stdio.h>

int main() {
	char ch;
	printf("enter the letter");
	scanf("%c",&ch);
	if(ch>='a' && ch<='z')
	printf("%c albhabet",ch);
	else
	printf("%c not albhabet",ch);
	return 0;
}
