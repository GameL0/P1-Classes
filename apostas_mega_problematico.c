#include <stdio.h>
#define MAX_COLUNAS 10


// Sempre quando muda de cartela, o número começa de um valor menor até um maior...
int main()
{
    int n;
    char virgula;

    scanf("%d", &n);

    int matriz[n][MAX_COLUNAS];
    int colunas_validas[n]; // Guarda quantos valores válidos cada linha tem

    // Inicializa toda a matriz com zero
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < MAX_COLUNAS; j++) {
            matriz[i][j] = 0;
        }
    }

    for (int i = 0; i < n; i++)
    {
        int value_anterior = 0;
        colunas_validas[i] = 0;
        for (int j = 0; j < MAX_COLUNAS; j++)
        {
            

            scanf("%d", &matriz[i][j]);
            if (j > 0 && matriz[i][j] < value_anterior)
            {
                break;
            }

            int ret = 1;

            if (j < MAX_COLUNAS - 1)
            {
                ret = scanf(" %c", &virgula);

                if ( ret != 1 || virgula != ',')
                {
                    break;
                }
            }
            value_anterior = matriz[i][j];
            colunas_validas[i]++;
        }
    }

    for (int i = 0; i < n; i++)
    {
        int value_anterior = 0;
        for(int j = 0; j < colunas_validas[i]; j++)
        {
            printf("%d ", matriz[i][j]);
            if (j > 0 && matriz[i][j] < value_anterior)
            {
                break;
            }
            value_anterior = matriz[i][j];
        }
        printf("\n");
    }

    return 0;
}