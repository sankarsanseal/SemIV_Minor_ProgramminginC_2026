/*

Swap by Reference
*/

#include <stdio.h>

void swap(int *x, int *y)
{

        int temp;
        temp = *x;

        *x = *y;
        *y=temp;


}

int main(){


    int i, j;

    printf("Enter 1st integer:");
    scanf("%d", &i);

    printf("Enter 2nd integer:");
    scanf("%d", &j);

    printf("Before swap: %d, %d\n", i, j);

    swap(&i, &j);

    printf("After swap: %d, %d\n", i, j);
}