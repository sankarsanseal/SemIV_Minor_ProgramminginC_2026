//14 no
#include<stdio.h>

float area(float r){
 return 3.14*r*r;
}
float circumference(float r){
	return 2*3.14*r;
}


main(){
	float area(float),circumference(float);
	int i;
	float r,a,c;
	for(i=1;i<=5;i++){
		printf("\nEnter Radius:");
		scanf("%f",&r);
		a=area(r);
		printf("Area:%f",a);
		c=circumference(r);
		printf("\nCircumference:%f",c);
	}
}


