#include <stdio.h>

int main(void) {
     int i,n,min, a[67];
     scanf("%d",&n);
     for(i=0;i<n;i++)
     {
     	scanf("%d",&a[i]);
     }
     min=a[0];
     for(i=0;i<n;i++)
     {
     if(min>a[i])
     {
     min=a[i];
     }}
     printf("%d",min);
	return 0;
}
