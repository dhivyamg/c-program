#include <stdio.h>

int main()
{
	char ch;
	printf("enter the letter");
	scanf("%c",&ch);
	if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
	printf("vowel letter%c",ch);
	else
	printf("not vowel%c",ch);
	return 0;
}
