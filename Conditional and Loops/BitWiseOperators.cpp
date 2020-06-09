// Author : Nisarg Chokshi

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void calculate_the_maximum(int n, int k){
    int maxand = 0, maxor = 0, maxxor = 0;
    int band, bor, bxor;
    for(int i=1; i<n; i++ ){
        for(int j= i+1; j<=n; j++){
            band = i & j;
            bor = i | j;
            bxor = i ^ j;
            if (maxand < band && band < k)
                maxand = band;
            if (maxor < bor && bor < k)
                maxor = bor;
            if(maxxor < bxor && bxor < k)
                maxxor = bxor;
      }
  }
  printf("%d\n%d\n%d", maxand, maxor, maxxor);
}

int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}

