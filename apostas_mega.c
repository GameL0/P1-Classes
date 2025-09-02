#include <stdio.h>

int main()
{
    int n;
    int ganhadores = 0;

    scanf("%d", &n);

    int all_bets[1000][10];
    int bet_sizes[1000];

    for (int i = 0; i < n; i++)
    {
        int count = 0;
        int num;
        char sep;

        do {
            scanf("%d", &num);
            all_bets[i][count] = num;
            count++;
            sep = getchar();
        } while (sep == ',');

        bet_sizes[i] = count;
    }

    int result[6];
    for (int i = 0; i < 6; i++)
    {
        scanf("%d", &result[i]);
    }

    for (int i = 0; i < n; i++)
    {
        int hits = 0;
        for (int k = 0; k < 6; k++)
        {
            for (int j = 0; j < bet_sizes[i]; j++)
            {
                if (all_bets[i][j] == result[k])
                {
                    hits++;
                    break;
                }
            }
        }
        if (hits == 6)
        {
            ganhadores++;
        }
    }

    printf("Total de ganhadores: %d\n", ganhadores);

    return 0;
}