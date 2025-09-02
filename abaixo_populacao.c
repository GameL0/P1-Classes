#include <stdio.h>

void loop(double acumulador1, int acumulador2)
{
    int n;

    scanf("%d", &n);

    if (n == 999)
    {
        printf("%.2f\n%d\n", acumulador1, acumulador2);
        return;
    }

    if (n > 2)
    {
        acumulador1 += (12.89 * (n - 2));
        acumulador2 ++;
    }

    loop(acumulador1, acumulador2);
}



int main()
{
    loop(0, 0);
    return 0;
}