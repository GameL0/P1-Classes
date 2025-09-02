#include <stdio.h>

int mdc(int A, int D)
{
    // A = D * Q + R
    int r = A % D;

    if (r != 0)
    {
        return mdc(D, r);
    }

    return D;

}

void scanf_recursivo(int casos_total)
{
    int primeiro_valor, segundo_valor;
    

    if (casos_total > 0)
    {

        scanf("%d%d", &primeiro_valor, &segundo_valor);

        casos_total -= 1 ;
        printf("MDC(%d,%d) = %d\n",primeiro_valor, segundo_valor, mdc(primeiro_valor, segundo_valor));
        return scanf_recursivo(casos_total);
    }
}


int main()
{
    int casos_total;
    scanf("%d", &casos_total);

    if (casos_total > 0)
        scanf_recursivo(casos_total);
    else
    {
        printf("SEM RESPOSTA");
    }

    return 0;
}