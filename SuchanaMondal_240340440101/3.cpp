/* S=1+(1/2)+(1/3)+(1/4)+.....+(1/n)*/
#include<stdio.h>
int main(){
	float s=0,i,n;
	printf("Enter a limit:");
	scanf("%f",&n);
	for(i=1;i<=n;i++){
		s=s+1/i;
	}
	printf("\n%f\n",s);
	return 0;
}

