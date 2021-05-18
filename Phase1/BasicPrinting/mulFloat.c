#include <stdio.h>

int main() {
    double a, b, product;

    printf("Please enter two numbers: ");

    scanf("%lf %lf", &a, &b);

    product = a * b;

    printf("Product = %.2lf\n", product);

    return 0;
}
