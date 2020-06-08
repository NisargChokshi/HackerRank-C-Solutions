// Author : Nisarg Chokshi
/* Task : Your task is to take two numbers of int data type, two numbers of float data type as 
		input and output their sum:

		(1) Declare Four variables: two of type int and two of type float.
		(2) Read Two lines of input from stdin (according to the sequence given in the 'Input Format' 
			section below) and initialize your  variables.
		(3) Use the "+" and "-" operator to perform the following operations:
		(4) Print the sum and difference of two int variable on a new line.
		(5) Print the sum and difference of two float variable rounded to one decimal place on a 
			new line.
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int a, b;
    float c, d;
    printf("\n Enter Two Integer Numbers : ");
    scanf("%d %d", &a, &b);
    printf(" Enter Two Real Value Float Numbers : ");
    scanf("%f %f", &c, &d);
    printf("\n Addition of Integers : %d\n Subtraction of Integers : %d", a + b, a - b);
    printf("\n\n Addition of Floating Numbers : %.1f\n Subtraction of Floating Numbers : %.1f", c + d, c - d);
    return 0;
}
