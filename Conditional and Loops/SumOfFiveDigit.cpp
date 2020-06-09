#include <stdio.h>
// Author : Nisarg Chokshi

#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
    int n;
    int sum = 0;
    printf("\n Enter a Number : ");
    scanf("%d", &n);
    int temp = n;
    while (temp > 0) {
        sum = sum + (temp % 10);
        temp = temp / 10;
    }
    printf("\n Sum of Digits of the Number %d is = %d", n, sum);
    return 0;
}
