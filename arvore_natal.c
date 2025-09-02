#include <stdio.h>

int preco_enfeites(int r, double value)
{
    if (r > 0)
    {
        int qtd_enfeite;
        double value_enfeite;

        scanf("%d%lf", &qtd_enfeite, &value_enfeite);

        value += qtd_enfeite * value_enfeite;

        return preco_enfeites(r - 1, value);
    }

    return value;
}



int main()
{
    double arvore;
    int r = 3;
    double value_total;

    scanf("%lf", &arvore);


    value_total += arvore;
    value_total += preco_enfeites(r, 0);


    printf("%.2f\n", value_total);
    printf("%.2f\n", value_total / 21);
    return 0;
}