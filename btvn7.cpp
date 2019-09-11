#include <stdio.h>

int main(){
    int n,S;
    
    int mua_do_an,mua_do_uong;
    int com_ga = 25, pho_bo = 25,bun_dau =25;
    int fanta = 10,seventh_up=10,cocacola=10;
    printf("1.chon mon an\n");
    printf("2.chon do uong\n");
    printf("3.thanh toan\n");
    printf("4.thoat chuong trinh\n");
    scanf("%d",&n);
    // hien thi menu cho khách
    for(int j;n==1;){
    	
    	printf("1_com ga\n");
    	printf("2_ pho bo\n");
    	printf("3_bun dau\n");
    	printf("4_quay lai\n");
    	
    	scanf("%d",&j);
    	 for(;j<4;){
    	 	if(j==1){
    	 		printf("ban vua chon com ga\n");continue;}
    	 	else if(j==2){
    	 		printf("ban vua chon pho bo\n");continue;}
    	 	else if(j==3){
    	 		printf("ban vua chon bun dau\n");continue;}
    	if(j==4){
    		printf("vui long thanh toan\n");break;}
    	 }break;
    	 
    printf("1.chon mon an\n");
    printf("2.chon do uong\n");
    printf("3.thanh toan\n");
    printf("4.thoat chuong trinh\n");
    scanf("%d",&n); 
    }
    for(int j;n==2;){
    	printf("1.fanta\n");
    	printf("2.seventh up\n");
    	printf("3.cocacola\n");
    	printf("4.quay lai\n");
    	
    	scanf("%d",&j);
    	for(;j<4;){
    		if(j==1){
    			printf("ban vua chon fanta\n");}
    		else if(j==2){
    			printf("ban vua chon seventh up\n");}
    		else if(j==3){
    			printf("ban vua chon cocacola\n");}
    	if(j==4){
		printf("vui long thanh toan\n");}
		break;
	}	
	}
	if(n==3){
		scanf("%d",&S);
		printf("so tien can tra la: %d\n",S);}
	
		
	
	return 0;
}

