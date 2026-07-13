/* 	*
   ***
  *****
 *******
*********  */
#include<stdio.h>
main(){
	int n,i,j,k;
	printf("\nEnter the number of lines to print:");
	scanf("%d",&n);
	for(i=1;i<=n;i++) //outer loop counts number of lines
	{
		for(j=1;j<=n-i;j++) //Loops for blanks in front of the stars
			printf(" "); // prints a blank space
		
		for(k=1;k<=2*i-1;k++) // loop for the stars
			printf("*"); // print a star
		printf("\n");
		}
		
}

