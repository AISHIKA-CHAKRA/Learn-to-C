#include<stdio.h>

int main() {
	// your code goes here
    int X, Y;
    printf("Enter the number of stoves in the restaurant:\n");
    scanf("%d", &X);
    printf("Time for which chef can cook\n");
    scanf("%d", &Y);
    printf("Number of customers, Chef can serve: %d", X*Y);
    return 0;
}
