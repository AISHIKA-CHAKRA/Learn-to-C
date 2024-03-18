#include<stdio.h>
int factorial(int num)
{
    if(num == 1 || num == 0)
    {
        return 1;
    }
    else{
        return(num* factorial (num-1));
    }
}
int main()
{
    int num;
    int array[10]={1, 2, 3, 4, 5, 6, 7, 8 ,9, 10};
    int factorial = 1;
    int i;
    for(i=1; i<10; i++);
    {
        factorial = array[i];
    }
    printf("The factorial of 10! is: %d\n",factorial*(num-1));

    return 0;

}