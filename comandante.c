#include <stdio.h>

int main()
{
    int n, m;
    scanf("%d%d", &n, &m);

    int matriz[n][m];

    for(int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &matriz[i][j]);
        }
    }

    int a;
    scanf("%d", &a);

    int x,y,d;
    for (int atk = 0; atk < a; atk++)
    {
        scanf("%d%d%d", &x, &y, &d);

        int array_x[] = {0, 1, -1, 0, 0, 1, -1, 1, -1};
        int array_y[] = {0, 0, 0, 1, -1, 1, -1, -1, 1};
        int array_d[] = {d, d/2, d/2, d/2, d/2, d/2, d/2, d/2, d/2};

        for (int i = 0; i < 9; i++)
        {
            int nx = x + array_x[i];
            int ny = y + array_y[i];

            if (nx >= 0 && nx < n && ny >= 0 && ny < m)
            {
                matriz[nx][ny] -= array_d[i];
                if (matriz[nx][ny] < 0)
                {
                    matriz[nx][ny] = 0;
                }
            }
        }
}


    // printa matriz depois de dado o dano
    for(int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (j == m - 1)
            {
                printf("%d", matriz[i][j]);
            }
            else
            {
                printf("%d ", matriz[i][j]);
            }

        }
        printf("\n");
    }

    double diagonal_p = 0, diagonal_s = 0;

    int diagonal_total;

    if (n > m)
    {
        diagonal_total = m;
    }
    else
    {
        diagonal_total = n;
    }

    for (int i = 0; i < diagonal_total; i++)
    {
        diagonal_p += matriz[i][i];
        diagonal_s += matriz[i][m - 1 - i];
    }



    printf("%.2f\n", diagonal_p / diagonal_total);
    printf("%.2f\n", diagonal_s / diagonal_total);


    return 0;
}