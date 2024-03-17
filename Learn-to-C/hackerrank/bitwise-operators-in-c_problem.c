#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.
int max(int a, int b){
    return a>b ? a:b;
}
int min(int a, int b){
    return a < b ? a:0;
}


void calculate_the_maximum(int n, int k) {
  //Write your code here.
   int and=0, or=0, xor=0;
  for(int i=1; i<n; ++i){
    for(int j= i+1; j<=n; ++j){
        and = max(and, min(i&j, k));
        or = max(or, min(i|j, k));
        xor = max(xor, min(i^j, k));
    }
  }
  printf("%d\n%d\n%d", and, or, xor);
}

int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}
