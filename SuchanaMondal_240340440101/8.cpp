#include<stdio.h>

#define swap(x,y) int temp=x; x=y; y=temp;

//Example of macro


int main()
{
    int x,y;
    printf("Enter 1st number:");
    scanf("%d", &x);

    printf("Enter 2nd number:");
    scanf("%d", &y);

    swap(x,y);

    printf("The 1st number %d and second number %d\n", x, y);
}