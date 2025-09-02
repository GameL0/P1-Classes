#include <stdio.h>
#include <string.h>

void print_matriz(int matriz[3][3])
{
    for (int i = 0; i <= 2; i++)
    {
        for (int j = 0; j <= 2; j++)
        {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}


void sum_matriz(int matriz_soma1[3][3], int matriz_soma2[3][3], int matriz_soma_r[3][3])
{
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j <= 2; j++)
        {
            matriz_soma_r[i][j] = matriz_soma1[i][j] + matriz_soma2[i][j];
        }
    }

    printf("\nResultado Soma:\n");
    print_matriz(matriz_soma_r);
}

void multi_matriz(int matriz_multi1[3][3], int matriz_multi2[3][3], int matriz_multi_r[3][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int x = 0; x < 3; x++)
            {
                matriz_multi_r[i][j] += matriz_multi1[i][x] * matriz_multi2[x][j]; 
            }
        }
    }

    printf("\nResultado Multi:\n");
    print_matriz(matriz_multi_r);
}

void sub_matriz(int matriz_sub1[3][3], int matriz_sub2[3][3], int matriz_sub_r[3][3])
{
    for (int i = 0; i <= 2; i++)
    {
        for (int j = 0; j <= 2; j++)
        {
            matriz_sub_r[i][j] = matriz_sub1[i][j] - matriz_sub2[i][j];
        }
    }

    printf("\nResultado Sub:\n");
    print_matriz(matriz_sub_r);
}



void insert_matriz(int matriz[3][3])
{
    for (int i = 0; i <= 2; i++)
    {
        for (int j = 0; j <= 2; j++)
        {
            scanf("%d", &matriz[i][j]);
        }
    }
}




int main ()
{
    int m_true = 0;

    while (m_true == 0)
    {
        char input[20];
        scanf("%s", input);

        if (strcmp(input, "Fim") == 0)
        {
            break;
        }
        else if (strcmp(input, "Soma") == 0)
        {
            int matriz_soma1[3][3], matriz_soma2[3][3], matriz_soma_r[3][3];
            insert_matriz(matriz_soma1);
            insert_matriz(matriz_soma2);

            sum_matriz(matriz_soma1, matriz_soma2, matriz_soma_r);

        }
        else if(strcmp(input, "Multi") == 0)
        {
            int matriz_multi1[3][3], matriz_multi2[3][3], matriz_multi_r[3][3];
            insert_matriz(matriz_multi1);
            insert_matriz(matriz_multi2);

            multi_matriz(matriz_multi1, matriz_multi2, matriz_multi_r);
        }
        else if (strcmp(input, "Sub") == 0)
        {
            int matriz_sub1[3][3], matriz_sub2[3][3], matriz_sub_r[3][3];
            insert_matriz(matriz_sub1);
            insert_matriz(matriz_sub2);

            sub_matriz(matriz_sub1, matriz_sub2, matriz_sub_r);
        }
    }



    return 0;
}