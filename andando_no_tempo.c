#include <stdio.h>

int main()
{
    int a, b, c, soma_a_b, soma_a_c, soma_b_c;
    scanf("%d%d%d", &a, &b, &c);

    soma_a_b = a + b;
    soma_a_c = a + c;
    soma_b_c = b + c;

    if (a == b || a == c || b == c)
    {
        printf("S");
    }
    else if ((soma_a_b - c == 0) || (soma_a_c - b == 0) || (soma_b_c - a == 0))
    {
        printf("S");
    }
    else
    {
        printf("N");
    }

    return 0;
}