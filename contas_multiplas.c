#include <stdio.h>

int multiplos_ambos(int n1, int n2, int max)
{
    if (n1 * max < 50)
    {
        if ((n1 * max) % n2 == 0)
        {
            return 1 + multiplos_ambos(n1, n2, max + 1);
        }
        else
        {
            return 0 + multiplos_ambos(n1, n2, max + 1);
        }
    }

    return 0;
}



int main()
{
    int n1, n2;
    scanf("%d%d", &n1, &n2);

    printf("%d\n", multiplos_ambos(n1, n2, 1));

    return 0;
}