#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number\n");
    scanf("%d", &n);
    
    if(n<=500)
    {
        printf("Your Guess is too low\n");
    }
    else if(n>=500 && n<555)
    {
        printf("Your Guess is near\n");
    }
    else if(n==555)
    {
        printf("Your Guess is correct\n");
    }
    else if(n>555 && n<=600)
    {
        printf("Your Guess is near\n");
    }
    else if(n>= 600)
    {
        printf("Your Guess is too high\n");
    }
    else
    {
        printf("Invalid Input\n");
    }

    return 0;
}