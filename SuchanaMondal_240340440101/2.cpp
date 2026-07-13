//WAP to Reverse a number
#include<stdio.h>
int main(){
	int n,x,reverse=0;
	printf("Enter the Number:");
	scanf("%d",&n);	
	while(n>0)
	{
		x=n%10;	
		reverse=reverse*10+x;
		n=n/10;
	}
	printf("Reverse number is:%d\n",reverse);
}
