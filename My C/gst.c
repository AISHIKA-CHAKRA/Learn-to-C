#include <stdio.h>

int main()
{
    float product_amount;
    printf("Please enter the value of the product\n");
    scanf("%f", &product_amount);
    printf("The product's amount with 18 percent GST is %.2f", product_amount + product_amount * 18 / 100);
    return 0;

}