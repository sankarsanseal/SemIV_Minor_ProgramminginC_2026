/* WAP to display FIBONANCCI SEQUENCE using iteration*/
#include<stdio.h>
#include<math.h>
main(){
	int f0,f1,f2,n,i;
	f0=0;
	f1=1;
	printf("Give The Value Of n:");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		f2=f0+f1;
		printf("\n%d",f0);
		f0=f1;
		f1=f2; 
	}
}
