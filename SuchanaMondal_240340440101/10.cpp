// no 10
#include<stdio.h>
#include<stdlib.h>
main(){
	int ch;
	int x[100],i,n,j;
	int sum=0,max,min,duplicate;
	float avg;
	printf("Enter numbers of elements:");
	scanf("%d",&n);
	printf("\nEnter array elements:");
	for(i=0;i<n;i++){
		scanf("\n%d",&x[i]);
	} 
	while(1)
	{
	printf("1.Print the even valued elements\n");
	printf("2.Print the odd valued elements\n");
	printf("3.Print the sum and average of the element of array\n");
	printf("4.Print the maximum and minimum element of array\n");
	printf("5.Remove the duplicates from the array\n");
	printf("6.Print the array in reverse order\n");
	printf("7.Quit\n");
	printf("Enter your choice:");
	scanf("%d",&ch);
	
	switch(ch){
		case 1:
			printf("Even numbers are:");
			for(i=0;i<n;i++){
				if(x[i]%2==0){
					printf(" %d",x[i]);
				}
			}
			break;
			
		case 2:
				printf("\n Odd numbers are:");
			for(i=0;i<n;i++){
				if(x[i]%2!=0){
					printf(" %d",x[i]);
				}
			}
			break;
			
		case 3:
			for(i=0;i<n;i++){
			sum=sum+x[i];
			avg=sum/n;
			}
			printf("Sum=%d",sum);
			printf("\nAverage=%f",avg);
			break;
			
		case 4:
			max=min=x[0];
			for(i=0;i<n;i++){
				if(x[i]>max){
					max=x[i];
				}if(x[i]<min){
					min=x[i];
				}
			}
			printf("Max=%d,Min=%d",max,min);
			break;
			
		case 5:
			printf("After removing duplicates:");
			for(i=0;i<n;i++){
				duplicate=0;
				for(j=0;j<i;j++){
					if(x[i]==x[j]){
						duplicate=1;
						break;
					}
				}
				if(duplicate==0){
					printf("\n%d",x[i]);
				}
			}
			break;
			
		case 6:
			printf("Array in reverse order:");
			for(i=n-1;i>=0;i--){
				printf(" %d",x[i]);
			}
			break;
			
		case 7:
			exit(0);

			
		default:
			printf("\nEnter Right Choice");
		}
	}
}



