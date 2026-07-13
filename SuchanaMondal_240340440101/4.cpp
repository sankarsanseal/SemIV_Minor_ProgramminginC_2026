/* S=1-2+3-4+5.....*/
#include<stdio.h>
int main(){
	int i,n,s=0;
	printf("Enter ur limit:");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		if(i%2==0){
			s=s-i;
			printf(" -%d",i);
		} else{
			s=s+i;
			printf(" +%d",i);
		}
	}
	printf(" = %d",s);	
}
