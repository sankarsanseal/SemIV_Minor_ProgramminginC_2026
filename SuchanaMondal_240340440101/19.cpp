/* GCD of two numbers without recursion*/
#include<stdio.h>
main(){
	int x,y,temp,z;
	printf("Enter 2 numbers:");
	scanf("%d %d",&x,&y);
	if(y>x){
		temp=x;
		x=y;
		y=temp;
	}
	while(y%x>0){
		z=y%x;
		y=x;
		x=z;
	}
	printf("GCD is=%d",x);
}


