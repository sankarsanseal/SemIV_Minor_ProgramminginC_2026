/*PRINT PRIME NUMBERS AMONG 1 TO n*/
#include<stdio.h>
#include "6.cpp"
int main(){
	int i,j,n=100,prime=1;
	for(i=2;i<=n;i++){
		primecheck(i);
		// for(j=2;j<i;j++){
		// 	if(i%j==0){
		// 		prime=0;
		// 		break;
		// 	}else{
		// 		prime=1;
		// 	}
		// }
		// if(prime==1){
		// 	printf(" %d",j);
		// }
	}
	return 0;
}
