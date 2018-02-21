#include <stdio.h>

int main(void)
{
int length,width,height,vol,area;
scanf("%d%d%d",&length,&width,&height);
vol=length*width*height;
printf("\n volume is %d",vol);
area=length*width;
printf("\n area is %d",area);
	return 0;
}
