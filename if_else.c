#include<stdio.h>

int main()
{
    int age;
    printf("Enterr your age:\n");
    scanf("%d", &age);

    if(age>=18)
    {
        printf("You are eligible for voting");
    }

    else
    {
        printf("You are not eligible for voitng");
    }

    return 0;
}