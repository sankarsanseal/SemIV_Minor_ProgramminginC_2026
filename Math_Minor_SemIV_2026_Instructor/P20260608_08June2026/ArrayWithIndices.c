/*


Example of creating an array with DIRECTIVE macro.
Here the DIRECTIVE name is showed as #define ARRAYLENGHT 5

Wherever in the writen code has ARRAYLENGTH,
the locations will be replaced with value 5.

If we required to create an array of length of 20,say, instead of 5,
we just change it to 20.

that time we write
# define ARRAYLENGTH 20

instead of

#define ARRAYLENGTH 5



*/


#include     <stdio.h>

#define ARRAYLENGTH 5 //Preprocessor with directive definition

int main(){

    double arr1[ARRAYLENGTH];

    arr1[0] = -99;

    /*

    Reading Array Values

    */

    for(int i = 0 ; i < ARRAYLENGTH; i++)
    {
        printf("Enter the value for location %d:", i);
        scanf("%lf", &arr1[i]);
    }


    /*

    Displaying Array Values

    */

    for(int i = 0; i < ARRAYLENGTH; i++)
    {
        printf("Value at location %i is %lf\n", i, arr1[i]);
    }

}
