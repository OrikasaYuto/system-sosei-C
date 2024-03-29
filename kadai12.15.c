#include <stdio.h>
#include <math.h>

int main()
{
    double a, b, c;

    printf("Enter the coefficients (a, b, c): ");
    scanf("%lf %lf %lf", &a, &b, &c);

    double discriminant = b * b - 4 * a * c;

    if (discriminant > 0) {
        double root1 = (-b + sqrt(discriminant)) / (2 * a);
        double root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("Real roots: %.2lf and %.2lf\n", root1, root2);
    }
    else if (discriminant == 0) {
        double root = -b / (2 * a);
        printf("Real and equal roots: %.2lf\n", root);
    }
    else {
        double realPart = -b / (2 * a);
        double imaginaryPart = sqrt(-discriminant) / (2 * a);
        printf("Complex roots: %.2lf + %.2lfi and %.2lf - %.2lfi\n", realPart, imaginaryPart, realPart, imaginaryPart);
    }

    return 0;
}

