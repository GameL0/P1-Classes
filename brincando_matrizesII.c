#include <stdio.h>

int main()
{
    int matriz[3][3];
    double media = 0; // Inicializar media
    int m_value = 1000000;
    int delta;
    int soma_fora_diagonal = 0; // Inicializar soma_fora_diagonal
    double divisor = 9.00;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &matriz[i][j]);

            if (matriz[i][j] <= 0)
            {
                divisor--;
            }
            else
            {
                media += matriz[i][j];
            }

            if (m_value > matriz[i][j])
            {
                m_value = matriz[i][j];
            }

            if (i != j)
            {
                soma_fora_diagonal += matriz[i][j];
            }
        }
    }

    if (divisor == 0) // Garantir que divisor não seja zero
    {
        divisor = 1; // Evitar divisão por zero
    }

    if (m_value % 2 == 0)
    {
        delta = 1;
    }
    else
    {
        delta = 0;
    }

    printf("%.2f %d %d %d\n", media / divisor, m_value, delta, soma_fora_diagonal); // Garantir formato correto

    return 0;
}