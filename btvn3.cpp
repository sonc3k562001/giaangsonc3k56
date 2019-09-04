#include <stdio.h>

int main(){
    int x,y,z;
    scanf("%d",&x);
    scanf("%d",&y);
    scanf("%d",&z);
    x = y;
    y = z;
    z = x;
    printf("%d = x\n",x);
    printf("%d = y\n",y);
	return 0;
}

