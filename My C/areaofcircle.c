#include <stdio.h>
int main()
{
    float b;
    float a = 3.14159265359;
    printf("Enter the radius of the circle\n");
    scanf("%f", &b);
    printf("The area of circle is %f", a * b * b);
    return 0;

}