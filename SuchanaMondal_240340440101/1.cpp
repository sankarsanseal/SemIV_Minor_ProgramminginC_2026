// WAP to print the sum and product of digits of an integer
/**

*/
#include <stdio.h>
int main(){
	int i,digit;
	int sum=0,product=1; // product must be checked for zero
	printf("Enter the Integer:");
	scanf("%d",&i);	
	if(i<0){
		i=-i;
	}	
	while(i>0){
		digit=i%10;
		sum=sum+digit;
		product=product*digit;
		i=i/10;
	}
	printf("Sum of digits=%d",sum);
	printf("\nProduct of digits=%d\n",product);
	return 0;
}
