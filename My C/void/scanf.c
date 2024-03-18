#include<stdio.h>

void main()
{
    int x, y, sn;
    printf("Enter two proper integer\n");
    sn = scanf("%d, %d", &x, &y);
    if(sn == 2)
    {
        printf("Proper input given");
        printf("%d, %d", x, y);
    }
    else
    printf("Wrong input given");
}