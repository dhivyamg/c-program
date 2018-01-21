#include <stdio.h>

int main() {
     int r,n,h=0,temp;
     printf("no. is");
     scanf("%d",&n);
     temp=n;
     while(temp!=0)
     {
     	r=temp%10;
     	h=h+r*r*r;
     	temp=temp/10;
     }
     if(n==h)
     printf("amstrong no is%d",n);
     else
     printf("not amstrong%d",n);
     return 0;
}
