#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int * val =(int *) malloc (10 *sizeof(int));
    char s;
    for(int i = 0; i<10; i++)
    *(val + i) = 0;
    while(scanf("%c", &s) == 1);
    if(s>= '0' && s<='9')
    (*(val+(s-'0')))++;
    for (int i =0; i<10; i++)
    printf("%d", *(val+i));    
    return 0;
}
