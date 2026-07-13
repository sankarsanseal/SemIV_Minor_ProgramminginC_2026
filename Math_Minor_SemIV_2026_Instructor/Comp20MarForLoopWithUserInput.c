#include<stdio.h>

int main(int argc, char * argv[])
{
    int num_to_print, i;

    printf("Enter the integer from which you like to start:");
    scanf("%i", &i);
    printf("Enter the integer upto which you like to print:");
    scanf("%i", &num_to_print);


    for(;i<=num_to_print; ++i)
    {
        printf("%i\n", i);
    }

}
