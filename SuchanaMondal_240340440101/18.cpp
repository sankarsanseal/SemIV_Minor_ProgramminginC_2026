/* WAP to calculate factorial of a number using iteration*/
#include<stdio.h>
#include<math.h>
main(){
	int n,i,f;
	f=1;
	printf("TYPE THE VALUES OF n:");
	scanf("%d",&n);
	for (i=1;i<=n;i++)
	f=f*i;
	printf("factorial of n is:%d",f);
}
