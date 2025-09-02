#include <stdio.h>
#define LINHAS_1 2
#define COLUNAS_1 3
#define LINHAS_2 3
#define COLUNAS_2 2

// Código Arthur
// int main()
// {
//     int i = 0;
//     int j = 0;
//     int x = 0;
//     float notas[5][4];

//     for(j; j < 4; i++)
//     {

//         if (i == 5)
//         {
//             i = 0;
//             j++;
//             // x ++;
//             // printf("vezes %d\n", x);
//         }

//         if (j < 4)
//         {
//             scanf("%e", &notas[i][j]);
//             printf("numero: %.1f\n", notas[i][j]);
//         }
//     }
//     return 0;
// }


// // Código Paes 1
// int main()
// {
//     float notas[LINHAS][COLUNAS];
//     int i, j;

//     for (i = 0; i < LINHAS; i++)
//     {
//         for (j = 0; j < COLUNAS; j++)
//         {
//             scanf("%f", &notas[i][j]);
//         }
//     }

//     for (i = 0; i < LINHAS; i++)
//     {
//         for (j = 0; j < COLUNAS; j++)
//         {
//             printf("%.2f ", notas[i][j]);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// Código Paes 2
// int main()
// {
//     float notas[LINHAS][COLUNAS];
//     int i, j;

//     for (i = 0; i < COLUNAS; i++)
//     {
//         for (j = 0; j < LINHAS; j++)
//         {
//             scanf("%f", &notas[j][i]);
//         }
//     }

//     for (i = 0; i < LINHAS; i++)
//     {
//         for (j = 0; j < COLUNAS; j++)
//         {
//             printf("%.2f ", notas[i][j]);
//         }
//         printf("\n");
//     }

//     return 0;
// }


// Código Arthur 2
// int main()
// {
//     float notas_A[LINHAS][COLUNAS];
//     float notas_B[LINHAS][COLUNAS];
//     float notas_AB[LINHAS][COLUNAS];
//     int i, j;

//     for (i = 0; i < LINHAS; i++)
//     {
//         for (j = 0; j < COLUNAS; j++)
//         {
//             scanf("%f", &notas_A[i][j]);
//         }
//     }

//     for (i = 0; i < LINHAS; i++)
//     {
//         for (j = 0; j < COLUNAS; j++)
//         {
//             scanf("%f", &notas_B[i][j]);
//         }
//     }



//     for (i = 0; i < LINHAS; i++)
//     {
//         for (j = 0; j < COLUNAS; j++)
//         {
//             notas_AB[i][j] = notas_A[i][j] + notas_B[i][j];
//             printf("%.2f ", notas_AB[i][j]);
//         }
//         printf("\n");
//     }

//     return 0;
// }



// Transposta
int main()
{
    float notas_A[LINHAS_1][COLUNAS_1];
    float notas_B[LINHAS_2][COLUNAS_2];
    int i, j;

    for (i = 0; i < LINHAS_1; i++)
    {
        for (j = 0; j < COLUNAS_1; j++)
        {
            scanf("%f", &notas_A[i][j]);
        }
    }

    for (j = 0; j < COLUNAS_2; j++)
    {
        for (i = 0; i < LINHAS_2; i++)
        {
            notas_B[i][j] = notas_A[i][j];
        }
    }


    for (j = 0; j < COLUNAS_2; j++)
    {
        for (i = 0; i < LINHAS_2; i++)
        {
            printf("%.2f ", notas_B[i][j]);
        }
        printf("\n");
    }


    return 0;
}