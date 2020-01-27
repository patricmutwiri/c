#include <stdio.h>
#include <stdlib.h>
#define number2 100.0
float number1, sum, product;

int main()
{
    printf("Enter the first number \n");
    scanf("%f",&number1);
    //printf("Enter the second number \n");
    //scanf("%f",&number2);

    sum=number1+number2;

    product=number1*number2;

    printf("The sum is %f and the product is %f \n", sum,product);

    return 0;
}
