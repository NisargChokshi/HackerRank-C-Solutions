// Author : Nisarg Chokshi
/* Task : You have to write a function int max_of_four(int a, int b, int c, int d) which 
		reads four arguments and returns the greatest of them.*/

#include <stdio.h>

// Defining the Function before the Function Call
int max_of_four(int a, int b, int c, int d){
    if(a > b && a > c && a > d)
        return a;
    else if (b > c && b >d)
        return b;
    else if (c > d)
        return c;
    else
        return d;
}

int main() {
    int a, b, c, d;
    printf("\n Enter Four Numbers : ");
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("\n Max Number is = %d", ans);
    
    return 0;
}
