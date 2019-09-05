#include <stdio.h>

int main(){
    int a=0;
	int b=1;
	int c=1;
   
    
    while(a>=0 || b>=0 || c>=0){
    printf("vui long nhap canh a\n");
    scanf("%d",&a);
    printf("vui long nhap canh b\n");
    scanf("%d",&b);
    printf("vui long nhap canh c\n");
    scanf("%d",&c);
    	if(a<b+c && b<c+a && c<a+b){
   	printf("%d la mot canh cua tam giac\n",a);
    printf("%d la mot canh cua tam giac\n",b);
    printf("%d la mot canh cua tma giac\n",c);
    }else{
	           printf("a,b,c khong phai la ba canh cua tam giac\n");
	}	
    	
    }
    
	return 0;
}

