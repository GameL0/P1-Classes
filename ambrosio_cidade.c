#include <stdio.h>

void ler_array(int i, int tam, int array[])
{
    if (i >= tam) return;

    scanf("%d", &array[i]);

    ler_array(i + 1, tam, array);
}

void calc_viagem(int i, int tam, int tempo_v[], int tempo_p[], int tempo_total)
{
    if (i >= tam)
    {
        printf("%d\n", tempo_total);
        return;
    }

    if (tempo_total <= 0)
    {
        // printf("caso temp 0 %d + %d\n", tempo_total, + tempo_v[i]);
        tempo_total += tempo_v[i];
    }
    else
    {
        if (tempo_p[i] - tempo_total >= 0)
        {
            // printf("caso n1 %d - %d + %d\n", tempo_p[i], tempo_total, tempo_v[i]);
            tempo_total += (tempo_p[i] - tempo_total) + tempo_v[i];
        }
        else
        {
            // printf("caso n2 %d - %d + %d\n", tempo_total, tempo_p[i],  tempo_v[i]);
            tempo_total += ( ((tempo_p[i] * 2)- tempo_total) + tempo_v[i]);

        }
    }

    // printf("tempo_atual %d\n", tempo_total);

    calc_viagem(i + 1, tam, tempo_v, tempo_p, tempo_total);

}



int main()
{
    int n;

    scanf("%d", &n);

    int tempo_v[n];
    int tempo_p[n];

    ler_array(0, n, tempo_v);
    ler_array(0, n, tempo_p);

    calc_viagem(0, n, tempo_v, tempo_p, 0);




    return 0;
}