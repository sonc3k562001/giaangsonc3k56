#include <stdio.h>

int main(){
    int x,y,z=0;
    printf("nhap chu so tren ban phim  ");
    scanf("%d",&x);
    while(x>0)
    {
         y= x%10;
         z= z+y;
         x=x/10;
        }
        printf("%d\n",z);
	return 0;
}

