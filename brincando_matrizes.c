#include <stdio.h>







int main()
{
    // Linhas e Colunas
    int i, j;
    int matriz[3][3];
    int somatorio = 0;
    int m_numero = 0;
    int diagonal = 0;

    for (i = 0; i <= 2; i++)
    {
        for (j = 0; j <= 2; j++)
        {
            scanf("%d", &matriz[i][j]);
        }
    }


    for (i = 0; i <= 2; i++)
    {
        for (j = 0; j <= 2; j++)
        {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }


    for (i = 0; i <= 2; i++)
    {
        for (j = 0; j <= 2; j++)
        {
            somatorio += matriz[i][j];

            if (i = j)
            {
                diagonal += matriz[i][j];
            }
        }
    }

    for (i = 0; i <= 2; i++)
    {
        for (j = 0; j <= 2; j++)
        {
            if (m_numero <= matriz[i][j])
            {
                m_numero = matriz[i][j];
            }
        }
    }

    printf("%d\n", somatorio);
    printf("%d\n", diagonal);
    printf("%d\n", m_numero);


    return 0;
}