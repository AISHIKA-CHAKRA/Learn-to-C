#include <stdio.h>
int main()
{
    float a;
    printf("Enter the value in celcius(C) scale\n");
    scanf("%f", &a);
    printf(" The value in farenheit(F) scale is %f", 9 * a / 5 + 32);
    return 0;
}
