#include <stdio.h>
#define LINHAS_1 2
#define COLUNAS_1 3
#define LINHAS_2 3
#define COLUNAS_2 2

// Esses Define estão definidos para o último código lá embaixo, mas antes ele tinha definido 
// como apenas LINHAS e COLUNAS, além disso ele mudou o tamanho das matrizes 👍.



// Código Arthur
// int main()
// {
//     int i = 0; // Índice para percorrer as linhas (alunos)
//     int j = 0; // Índice para percorrer as colunas (notas)
//     int x = 0; // Contador auxiliar (não utilizado, está comentado)
//     float notas[5][4]; // Matriz para armazenar notas de 5 alunos em 4 avaliações

//     // Loop para preencher a matriz de notas
//     for (j; j < 4; i++)
//     {
//         // Quando i chega a 5, reseta i para 0 e passa para a próxima coluna
//         if (i == 5)
//         {
//             i = 0;
//             j++;
//             // x++; // Incrementaria o contador x (comentado)
//             // printf("vezes %d\n", x); // Exibiria o número de vezes (comentado)
//         }

//         // Enquanto j for menor que 4, continua lendo as notas
//         if (j < 4)
//         {
//             scanf("%e", &notas[i][j]); // Lê uma nota em notação científica
//             printf("numero: %.1f\n", notas[i][j]); // Imprime a nota lida com uma casa decimal
//         }
//     }
//     return 0;
// }



// Código Paes 1
// int main()
// {
//     float notas[LINHAS][COLUNAS]; // Declara uma matriz de floats para armazenar as notas
//     int i, j; // Variáveis de controle para os loops

//     // Loop para ler os valores da matriz
//     for (i = 0; i < LINHAS; i++)
//     {
//         for (j = 0; j < COLUNAS; j++)
//         {
//             scanf("%f", &notas[i][j]); // Lê cada nota e armazena na posição correspondente
//         }
//     }

//     // Loop para exibir os valores da matriz
//     for (i = 0; i < LINHAS; i++)
//     {
//         for (j = 0; j < COLUNAS; j++)
//         {
//             printf("%.2f ", notas[i][j]); // Imprime a nota formatada com 2 casas decimais
//         }
//         printf("\n"); // Quebra de linha após imprimir cada linha da matriz
//     }

//     return 0;
// }



// Código Paes 2
// int main()
// {
//     float notas[LINHAS][COLUNAS]; // Declara uma matriz para armazenar as notas
//     int i, j; // Variáveis de controle dos loops

//     // Loop para ler os valores da matriz
//     // Primeiro percorre as colunas, depois as linhas (ordem invertida em relação ao tradicional)
//     for (i = 0; i < COLUNAS; i++)
//     {
//         for (j = 0; j < LINHAS; j++)
//         {
//             scanf("%f", &notas[j][i]); // Lê uma nota para a posição [linha][coluna]
//         }
//     }

//     // Loop para exibir os valores da matriz
//     // Percorre linha por linha, imprimindo cada valor
//     for (i = 0; i < LINHAS; i++)
//     {
//         for (j = 0; j < COLUNAS; j++)
//         {
//             printf("%.2f ", notas[i][j]); // Imprime cada nota com duas casas decimais
//         }
//         printf("\n"); // Quebra de linha após cada linha de notas
//     }

//     return 0;
// }



// Código Arthur 2
// int main()
// {
//     float notas_A[LINHAS][COLUNAS];   // Matriz para armazenar as notas do conjunto A
//     float notas_B[LINHAS][COLUNAS];   // Matriz para armazenar as notas do conjunto B
//     float notas_AB[LINHAS][COLUNAS];  // Matriz para armazenar a soma das notas de A e B
//     int i, j; // Variáveis de controle para os loops

//     // Leitura dos valores da matriz notas_A
//     for (i = 0; i < LINHAS; i++)
//     {
//         for (j = 0; j < COLUNAS; j++)
//         {
//             scanf("%f", &notas_A[i][j]); // Lê cada elemento da matriz A
//         }
//     }

//     // Leitura dos valores da matriz notas_B
//     for (i = 0; i < LINHAS; i++)
//     {
//         for (j = 0; j < COLUNAS; j++)
//         {
//             scanf("%f", &notas_B[i][j]); // Lê cada elemento da matriz B
//         }
//     }

//     // Soma dos elementos das matrizes A e B, armazenando em AB
//     for (i = 0; i < LINHAS; i++)
//     {
//         for (j = 0; j < COLUNAS; j++)
//         {
//             notas_AB[i][j] = notas_A[i][j] + notas_B[i][j]; // Soma correspondente dos elementos
//             printf("%.2f ", notas_AB[i][j]); // Imprime o resultado da soma com duas casas decimais
//         }
//         printf("\n"); // Quebra de linha após imprimir cada linha da matriz notas_AB
//     }

//     return 0;
// }



// Matriz Transposta
int main()
{
    float notas_A[LINHAS_1][COLUNAS_1]; // Matriz para armazenar as notas A (2x3)
    float notas_B[LINHAS_2][COLUNAS_2]; // Matriz para armazenar as notas B (3x2)
    int i, j; // Variáveis de controle dos loops

    // Leitura dos valores para a matriz notas_A
    for (i = 0; i < LINHAS_1; i++)
    {
        for (j = 0; j < COLUNAS_1; j++)
        {
            scanf("%f", &notas_A[i][j]); // Lê cada elemento da matriz A
        }
    }

    // Copiando valores da matriz notas_A para notas_B
    // Atenção: não há uma garantia que as dimensões sejam compatíveis para uma cópia completa
    for (j = 0; j < COLUNAS_2; j++)
    {
        for (i = 0; i < LINHAS_2; i++)
        {
            notas_B[i][j] = notas_A[i][j]; // Copia o valor correspondente de A para B
        }
    }

    // Impressão dos valores da matriz notas_B
    for (j = 0; j < COLUNAS_2; j++)
    {
        for (i = 0; i < LINHAS_2; i++)
        {
            printf("%.2f ", notas_B[i][j]); // Imprime cada elemento de notas_B com duas casas decimais
        }
        printf("\n"); // Quebra de linha após imprimir cada coluna de notas_B
    }

    return 0;
}
