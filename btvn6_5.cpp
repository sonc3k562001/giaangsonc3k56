#include <stdio.h>
#include <math.h>
int main(){
    int a[20];
    int dem;
    for(int i=0;i<20;i++){
    	printf("nhap vao phan tu cua mang\n");
    	scanf("%d",&a[i]);
    }
    for(int i=0;i<20;i++){
    	dem=0;
    	for(int j=1;j<=a[i];j++){
    	    if(a[i]%j==0){
    	    dem++;
    	}
    } 
       if(dem==2 && a[i]>1){
    	  printf("%d la so nguyen to\n",a[i]);
        }
    }
    	    
	return 0;
}

