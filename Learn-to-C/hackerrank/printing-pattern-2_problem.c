#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int Max(int a, int b)
{
    if(a>b)
    return a;
    
    else 
    return b;
}
int main() 
{

    int n;
    scanf("%d", &n);
  	// Complete the code to print the pattern.
      for(int i= -n +1; i<n; i++)
    {
        for(int j= -n+1; j<n; j++)
        {
            printf("%d\t", Max(abs(i), abs(j))+1);
        }
        printf("\n");
    }
    return 0;
}