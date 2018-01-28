#include <stdio.h>

int main(void) {
    int c,d;
    printf("enter two no.");
    scanf("%d%d",&c,&d);
     c=c+d;
     d=c-d;
     c=c-d;
     printf("%d%d",c,d);
	return 0;
}
