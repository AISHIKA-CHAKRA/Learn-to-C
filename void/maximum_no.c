#include<stdio.h>
void main()
{
    int a, b, c, max;
    printf("Enter three numbers to find the greatest among them\n");
    scanf("%d, %d, %d", &a, &b, &c);
    max = (a>b && a>c)? a : b > c ? b : c;
    printf("%d", max);
}