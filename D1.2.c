// Q2: Program to input two numbers and display their sum, difference, product, and quotient //

#include <stdio.h>

int main() 
{
    int a, b;
    int sum, difference, product, quotient;

    
    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    
    sum = a + b;
    product = a * b;
    quotient = a / b; 
    difference = a - b;

    
    printf("Sum=%d, Difference=%d, Product=%d, Quotient=%d\n", sum, difference, product, quotient);

    return 0;
}
