#include <stdio.h>

int main()
{
    double raio, pi;
    scanf("%lf", &raio);

    pi = 3.14159;
    double raio_cm = raio / 100;
    double raio_quadrado = (raio_cm * raio_cm);
    float area = raio_quadrado * pi;

    
    printf("Area = %.4f", area);
    return 0;
}