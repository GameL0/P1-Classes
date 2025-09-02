#include <stdio.h>

int main()
{
    int n, m;
    int qtd_acoes;
    int x,y;
    char acoes;

    scanf("%d%d", &n, &m);

    int matriz[n][m];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &matriz[i][j]);
        }
    }

    scanf("%d", &qtd_acoes);
    char array[qtd_acoes];

    for (int i = 0; i < qtd_acoes; i++)
    {
        scanf(" %c", &acoes);
        array[i] = acoes;
    }

    scanf("%d%d", &x, &y);


    for (int i = 0; i < qtd_acoes; i++)
    {
        if (array[i] == 'D') // Direita
        {
            if (y + 1 < m && matriz[x][y + 1] != 0)
            {
                y++;
            }
        }
        else if (array[i] == 'E') // Esquerda
        {
            if (y - 1 >= 0 && matriz[x][y - 1] != 0)
            {
                y--;
            }
        }
        else if (array[i] == 'C') // Cima
        {
            if (x - 1 >= 0 && matriz[x - 1][y] != 0)
            {
                x--;
            }
        }
        else if (array[i] == 'B') // Baixo
        {
            if (x + 1 < n && matriz[x + 1][y] != 0)
            {
                x++;
            }
        }
    }

    printf("(%d,%d)\n", x, y);


    return 0;
}