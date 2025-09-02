#include <stdio.h>

int entrada(int acumulador)
{
    double p1, p2;
    scanf("%lf%lf", &p1, &p2);
    
    if ((p1 * 0.8) >= p2)
    {
        return 1;
    }
    
    return 0;
}

void loop(int n, int acumulador)
{
    if (n <= 0)
    {
        printf("%d\n", acumulador);
        return;
    }

    acumulador += entrada(acumulador);

    loop(n - 1 ,acumulador);

}


int main()
{
    loop(5, 0);
    return 0;
}