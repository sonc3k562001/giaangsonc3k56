#include <stdio.h>
#include <math.h>
int main(){
    int a,b,c,C;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    if(a>b>c && b>c>a && c>b>a)
    printf(" a, b c là ba canh cua tam giac"); 
    C = a + b+ c;
    printf("chuvitamgiac = %d\n",C);
    
    float C2 = (float)C/2;
    float S = 0;
    S = sqrt(C2*(C2-a)*(C2-b)*(C2-c));
    printf("dientichtamgiac = %f\n",S);
	return 0;
}

