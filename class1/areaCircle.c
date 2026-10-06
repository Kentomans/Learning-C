// Problema 1. Area de un criculo

#include <stdio.h>
#include <math.h> //pow, sqrt

const float PI = 3.1416;
int main()
{
    float r = 0, a = 0;

    printf("Ingrese el radio del criculo: ");
    scanf("%f", &r);

    a = pow(r, 2.0) * PI;

    printf("El area del criculo es: %f", a);
    return 0;
}