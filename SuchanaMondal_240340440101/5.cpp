/* PALINDROME */	
#include<stdio.h>
main (){
	int n,r,s=0,temp;
	printf("Enter any number:");
	scanf("%d",&n);
	temp=n;
	while(n>0){
		r=n%10;
		s=(s*10)+r;
		n=n/10;
	}
	if(temp==s){
		printf("Palindrome Number");
	}else{
		printf("Not Palindrome Number");
	}
}

