// Author : Nisarg Chokshi
/* Task : You have to complete the function void update(int *a,int *b), which reads two integers 
		as argument, and sets "a" with the sum of them, and "b" with the absolute difference of them.
*/

#include <stdio.h>
#include<math.h>

// Defining a Function Update before the Function Call
void update(int *a,int *b) {
    int temp = *a;
    *a = *a + *b;
    *b = abs(temp - *b);     
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    printf("\n Enter Two Integer Numbers : ");
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("\n Addition of the Integers : %d\n Absolute Subtraction of the Integers : %d", a, b);

    return 0;
}
