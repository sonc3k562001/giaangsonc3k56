#include <stdio.h>
#include <math.h>
int main(){
    int a,b,c,x,y;
    float A;
    y = 0;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    
    A = ((b^2) - 4*a*c);
    if(A>0){
    	printf("phuong trinh co hai nghiem x1,x2\n");
    float x1 = (float)x;
    float x2 = (float)x;
    x1 = (-b+sqrt(A))/2*a;
    x2 = (-b-sqrt(A))/2*a;
    printf("x1=%f\n",x1);
    printf("x2=%f\n",x2);
}else{
	printf("phuong trinh vo nghiem");
}
	return 0;
}

