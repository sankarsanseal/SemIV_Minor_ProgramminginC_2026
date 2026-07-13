#include<stdio.h>
#include<stdlib.h>

void rectangle(){
	float l,b;
	printf("Enter length and breadth:");
	scanf("%f %f",&l,&b);
	printf("Area=%f\n",l*b);
}

void square(){
	float s;
	printf("Enter side:");
	scanf("%f",&s);
	printf("Area=%f\n",s*s);
}

void circle(){
	float r;
	printf("Enter radius:");
	scanf("%f",&r);
	printf("Area=%f\n",3.14*r*r);
}

void triangle(){
	float h,b;
	printf("Enter height and base:");
	scanf("%f%f",&h,&b);
	printf("Area=%f\n",0.5*h*b);	
}
main(){
	int ch;
	
	printf("1.Area of Rectangle\n");
	printf("2.Area of square\n");
	printf("3.Area of circle\n");
	printf("4.Area of triangle\n");
	printf("5.Quit\n");
	printf("Enter your choice:");
	scanf("%d",&ch);
	
	switch(ch){
		case 1:
			rectangle();
			break;
			
		case 2:
			square();
			break;
			
		case 3:
			circle();
			break;
			
		case 4:
			triangle();
			break;
			
		case 5:
			exit(0);
			
		default:
			printf("\nEnter Right Choice");
	}
	
}
