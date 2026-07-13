// 15 no
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
main(){
	int ch;
	char str[100];
	printf("Enter a String:");
	scanf("%s",&str);
	int i,j,cmp;
	char str1[50];
	int m,v=0,p=0;
	char vow[]="aeiouAEIOU";
	
	printf("1.Show Address of each Character\n");
	printf("2.Concatenate two strings without using strcat function\n");
	printf("3.Concatenate two strings using strcat function\n");
	printf("4.Compare two string\n");
	printf("5.Calculate length of the string\n");
	printf("6.Convert all lowercase characters to uppercase\n");
	printf("7.Convert all uppercase characters to lowercase\n");
	printf("8.Calculate numbers of Vowels\n");
	printf("9.Reverse the string\n");
	printf("10.Quit\n");
	printf("Enter your choice:");
	scanf("%d",&ch);
	
	switch(ch){
		case 1:
			break;
		case 2:
			printf("2nd String:");
			scanf("%s",&str1);
			for(i=0;str[i]!='\0';i++);
				for(j=0;str1[j]!='\0';j++){
					str[i]=str1[j];
					i++;
				}
				str[i]='\0';
				printf("Concatenated string: %s\n",str);
			break;
				
		case 3:
			printf("2nd String:");
			scanf("%s",&str1);
			strcat(str, str1);
			printf("Concatenated string:%s\n",str);
			break;	
			
		case 4:
			printf("2nd String:");
			scanf("%s",&str1);
			cmp=strcmp(str, str1);
			if(cmp==0){
				printf("SAME");
			}else{
				printf("NOT");
			}
			break;
			
			case 5:
				printf("Length is:%d",strlen(str));
				break;
				
			case 6:
				printf("the string is:%s",str);
				for(i=0;str[i]!='\0';i++){
					if (str[i]>='a' && str[i]<='z')
						str[i]=str[i]-32;
				}
				printf("\nAfter the name is:%s",str);
				break;
				
			case 7:
				printf("the string is:%s",str);
				for(i=0;str[i]!='\0';i++){
					if (str[i]>='A' && str[i]<='Z')
						str[i]=str[i]+32;
				}
				printf("\nAfter the name is:%s",str);
				break;
				
			case 8:
				while(str[p]!=NULL){
					for(m=0;m<strlen(vow);m++){
						if(str[p]==vow[m])
							v++;
					}
					p++;
				}
				printf("Vowles:%d",v);
				break;
			
			case 9:
				printf("Reverse is:%s",strrev(str));
				break;
			
			case 10:
				exit(0);
			
		default:
			printf("\nEnter Right Choice");
	}
		
}
