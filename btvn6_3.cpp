#include <stdio.h>

int main(){
    int n=6;
   
    for(int i=1;i<=n;i++)
	{
    	for(int k=1;k<=i;k++){
    		printf("*",n);
    	}
    	printf("\n");
    }
    	
	return 0;
}

