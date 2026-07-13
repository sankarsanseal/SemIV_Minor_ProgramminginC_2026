#include<stdio.h>
#include<stdlib.h>
int main(){
	int ch;
	int x[10][10],y[10][10],z[10][10],n,i,j,k,unit=0;
	printf("Enter the value of n:");
	scanf("%d",&n);
	printf("Enter numbers for 1st Matrix:\n");
		for(i=0;i<n;i++){
			for(j=0;j<n;j++){
				scanf("%d",&x[i][j]);
			}
		}
	printf("Enter numbers for 2nd Matrix:\n");
		for(i=0;i<n;i++){
			for(j=0;j<n;j++){
				scanf("%d",&y[i][j]);
			}
		}
		
	printf("1.Print the summation\n");
	printf("2.Print the difference\n");
	printf("3.Print the product\n");
	printf("4.Print the transpose\n");
	printf("5.Quit\n");
	printf("Enter your choice:");
	scanf("%d",&ch);
		
	switch(ch){
		case 1:
			for(i=0;i<n;i++){
				for(j=0;j<n;j++){
					z[i][j]=x[i][j]+y[i][j];
			}
		}
		printf("Sum is:\n");
		for(i=0;i<n;i++){
			for(j=0;j<n;j++){
				printf(" %d",z[i][j]);
			}
			printf("\n");
		}
		break;
		
		
		case 2:
			for(i=0;i<n;i++){
				for(j=0;j<n;j++){
					z[i][j]=x[i][j]-y[i][j];
			}
		}
		printf("Difference is:\n");
		for(i=0;i<n;i++){
			for(j=0;j<n;j++){
				printf(" %d",z[i][j]);
			}
			printf("\n");
		}
		break;
		
		case 3:
		for(i=0;i<n;i++){
				for(j=0;j<n;j++){
					z[i][j]=0;
					for(k=0;k<n;k++){
						z[i][j]+=x[i][k]*y[k][j];
					}
				}
			}
		printf("The Product of two Matrix is:\n");
		for(i=0;i<n;i++){
			for(j=0;j<n;j++){
				printf(" %d\t",z[i][j]);
			}
			printf("\n");	
		}
		break;
		
		case 4:
			printf("Transpose of the 1st Matrix:\n");
			for(i=0;i<n;i++){
				for(j=0;j<n;j++){
					printf(" %d",x[j][i]);
				}
				printf("\n");
			}
			printf("Transpose of the 2nd Matrix:\n");
			for(i=0;i<n;i++){
				for(j=0;j<n;j++){
					printf(" %d",y[j][i]);
				}
				printf("\n");
			}
	}
} 
