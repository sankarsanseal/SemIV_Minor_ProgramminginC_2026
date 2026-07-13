// Computes the factor of a given number
#include<stdio.h>
main (){
	int i,n,f=1;
	printf("Enter any number:");
	scanf("%d",&n);
	printf("Factors of %d are:",n);
	for(i=1;i<=n;i++){
		if(n%i==0){
			printf(" %d",i);
		}
	}
}
