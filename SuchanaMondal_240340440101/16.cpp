// NO 16
#include<stdio.h>
int main(){
	int x[50],y[50],z[50];
	int n1,n2,i;
	printf("Enter numbers of elements of 1st array:");
	scanf("%d",&n1);
	printf("\nEnter 1st array elements:\n");
	for(i=0;i<n1;i++){
		scanf(" %d",&x[i]);
	} 
	
		printf("Enter numbers of elements of 2nd array:");
	scanf("%d",&n2);
	printf("\nEnter 2nd array elements:\n");
	for(i=0;i<n2;i++){
		scanf(" %d",&y[i]);
	} 
	
	for(i=0;i<n1;i++){
		z[i]=x[i];
	} 
	
	for(i=0;i<n2;i++){
		z[n1+i]=y[i];
	} 
	
	printf("The new Array is : ");
	for(i=0;i<n1+n2;i++){
		printf(" %d",z[i]);
	} 	
	
	return 0;
}


