#include <stdio.h>

int main() {
     int r,n,h=0;
     printf("no. is");
     scanf("%d",&n);
     while(n!=0)
     {
     	r=n%10;
     	h=h+r*r*r;
     	n=n/10;
     }
     if(n==h)
     printf("amstrong no is%d",n);
     else
     printf("not amstrong%d",n);
     return 0;
}
