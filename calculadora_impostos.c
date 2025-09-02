#include <stdio.h>

int main()
{
    double cotacao_usd;
    double aliquota;
    double value_p, value_f;
    double impostos_importacao;
    double value_final;
    double value_total_p;
    double icms;
    double total_impostos;
    double total_pagar;

    scanf("%lf%lf%lf%lf", &cotacao_usd, &aliquota, &value_p, &value_f);

    //cotacao usd
    printf("%.2f\n", cotacao_usd);
    
    // valor produto
    double value_p_r = cotacao_usd * value_p;
    printf("%.2f\n", value_p_r);
    
    //valor frete
    double value_f_r = cotacao_usd * value_f;
    printf("%.2f\n", value_f_r);
    
    // valor total
    double value_total = value_p_r + value_f_r;
    printf("%.2f\n", value_total);

    // valor impostos de importacao

    if (value_p >= 2500)
    {
        impostos_importacao = value_p_r * 0.6;
        printf("%.2f\n", impostos_importacao);

        icms = ((value_p_r + impostos_importacao) / (1 - aliquota/100)) * (aliquota/100);
        printf("%.2f\n", icms);

        total_impostos = impostos_importacao + icms;
        printf("%.2f\n", total_impostos);

        total_pagar = value_total + total_impostos;
        printf("%.2f\n", total_pagar);

        printf("Impostos calculados sem o frete\n");
    }
    else
    {
        impostos_importacao = value_total * 0.6;
        printf("%.2f\n", impostos_importacao);

        icms = ((value_total + impostos_importacao) * aliquota) / (100 - aliquota);
        printf("%.2f\n", icms);

        total_impostos = impostos_importacao + icms;
        printf("%.2f\n", total_impostos);

        total_pagar = value_total + total_impostos;
        printf("%.2f\n", total_pagar);

        printf("Impostos calculados com o frete\n");
    }


    return 0;
}