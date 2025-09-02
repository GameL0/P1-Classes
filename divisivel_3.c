#include <stdio.h>

int divisivel_3(int n, int i)
{
    if (i > n)
    {
        return 0;
    }



    if(n % i == 0)
    {
        if (i % 3 == 0)
        {
            return 1 + divisivel_3(n, i + 1);
        }
    }

    return divisivel_3(n, i + 1);

}




int main()
{
    int n;

    scanf("%d", &n);

    if (divisivel_3(n, 1) != 0)
    {
        printf("%d\n", divisivel_3(n, 1));
    }
    else
    {
        printf("O numero nao possui divisores multiplos de 3!\n");
    }



    return 0;
}