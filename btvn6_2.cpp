#include <stdio.h>

int main(){
    int a[20];
    for(int i=0;i<20;i++){
    	scanf("%d",&a[i]);
	}
    	
    	for(int x,i=0;i<20;i++){
    		if(a[i]%2!=0){
    		printf("so le la %d\n",a[i]);
    		}
    	}
	return 0;
}

