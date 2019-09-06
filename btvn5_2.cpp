#include <stdio.h>

int main(){
    int n;
    printf("vui long chon do an");
    scanf("%d",&n);
    
	 while(n>3){
	 	    printf("are you crazy?choose again");
            scanf("%d",&n);}
	     if(n==1){
		         printf("ban vua chon cafe\n");}
		 else if(n==2){
		         printf("ban vua chon sinh to\n");}
		 else if(n==0){
		 	     printf("ban vua chon nuoc ep\n");}
		 else{ 
		         printf("doan xem\n");}
		 
		      
        
	return 0;
}

