//String Palindrome
#include<stdio.h>
#include<string.h>
int main(){
	char str1[100],str2[100];
	int pal;
	printf("Enter a String:");
	gets(str1);
	strcpy(str2,str1);
	printf("Original String:%s",str1);
	strrev(str1);
	printf("\nReverse String:%s",str1);
	pal=strcmp(str2,str1);
	if(pal==0){
		printf("\nPalindrome");
	} else{
		printf("\nNot Palindrome");
	}
}
