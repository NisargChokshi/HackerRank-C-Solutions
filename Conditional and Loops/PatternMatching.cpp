// Author : Nisarg Chokshi
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int minimum(int a, int b)
{
    if (a < b)
        return a;
    else
        return b;
}

int main() 
{

    int n;
    printf("\n Enter a Number for Pattern Matching : ");
    scanf("%d", &n);
    int size = (2*n) - 1;
    printf("\n Patterns is as Follows : \n");
    for(int i = 0; i < size; i++)
    {
        for(int j=0; j<size; j++){
            int temp = minimum(i, j);
            temp = minimum(temp, size - i - 1);
            temp = minimum(temp, size - j - 1);
            printf(" %d", n - temp);
        }
        printf("\n");
        
    }
    return 0;
}

