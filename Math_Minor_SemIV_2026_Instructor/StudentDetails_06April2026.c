#include <stdio.h>

/*

Author: Sankarsan Seal

Roll No:

Department:

Date of Modification: 06 April 2026

Description:A program to read student details.
            The details are name, roll no, and age;


*/

#define NAME_LENGTH 50

int main(int argc,char * argv[])
{
    int roll_no, age;
    char name[NAME_LENGTH];

    fflush(stdin);

    printf("Enter the roll no of the student:");
    scanf("%i", &roll_no);

    getchar(); //

    printf("Enter the name of the student:");
    scanf("%[^\n]s", name); //%s -> %[^\n]s


    printf("Enter the age of the student:");
    scanf("%d", &age);


    printf("The roll no: %d and age : %d of the student with name %s.",
           roll_no, age, name);


}
