/* Prime & Not Prime Number*/
#include<stdio.h>
void primecheck(int n){
	int i;
	int prime=1;
	// printf("Enter a number:");
	// scanf("%d",&n);
	for(i=2;i<=n-1;i++){
		if(n%i==0){
			prime=0;
			break;
		}else{
			prime=1;
		}
	}
	if(prime==1){
		printf("%d is Prime\n", n);
	}else{
		printf("%d Not Prime\n", n);
	}
}
