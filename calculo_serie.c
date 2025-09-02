#include <stdio.h>
#include <math.h>


void calculo_sequencia(int i, int n, double soma)
{
    if (i > n)
    {
        printf("S: %.2f\n", soma);
        return;
    }

    if (i % 2 == 0)
    {
        double m = i / 2.0;
        soma += (2 * pow(4, m - 1)) / (3 * m);
    }
    else
    {
        double m = (i + 1) / 2.0;
        soma += ((2 * m) - 1) / pow(4, m - 1);
    }


    calculo_sequencia(i + 1, n, soma);
}



int main()
{
    int n;
    scanf("%d", &n);

    calculo_sequencia(1, n, 0);
    return 0;
}