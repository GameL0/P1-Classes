#include <stdio.h>

int turnos(int v, int d)
{
    if (v % d == 0)
    {
        return v / d;
    }
    else
    {
        return v / d + 1;
    }
}


void entrada(int rodada, int v1, int v2, int d1, int d2)
{
    if (v1 <= 0)
    {
        printf("Bezaliel\n");
        return;
    }
    else if (v2 <= 0)
    {
        printf("Clodes\n");
        return;
    }

    // rodada de Clodes
    if (rodada % 2 == 0)
    {
        if (turnos(v2, d1) <= turnos(v1, d2))
        {
            v2 = v2 - d1;
        }
        else
        {
            d1 = d1 + 50;
        }

        entrada(rodada + 1, v1, v2, d1, d2);
    }
    //rodada de Bezaliel
    else
    {
        entrada(rodada + 1, v1 - d2, v2, d1, d2);
    }
}


void loop(int n)
{
    if (n > 0)
    {
        int v1, v2, d1, d2;
        scanf("%d%d%d%d", &v1, &v2, &d1, &d2);
        entrada(0, v1, v2, d1, d2);

        loop(n - 1);
    }
}


int main()
{
    int n;
    scanf("%d", &n);
    loop(n);
    return 0;
}