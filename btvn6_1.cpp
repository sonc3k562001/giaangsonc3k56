#include <stdio.h>

int main(){
    int sum=0;
    int ary[12];
    for(int i=0;i<12;i++){
    	scanf("%d",&ary[i]);
         sum = sum + ary[i];
	}
    printf("sum = %d\n",sum);
    float tb;
    tb = sum/12;
    printf("trung binh cong cua mang la: %f",tb);
	return 0;
}

