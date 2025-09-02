#include <stdio.h>
#define ADD 'A'
#define SUBTRACT 'S'
#define MULTIPLY 'M'
#define DIVIDE 'D'
#define CHANGE 'C'

void scanf_check(int n , double x, int contador)
{
    double y;
    char op;

    scanf(" %c%lf", &op, &y);

    if (n != contador)
    {
        
        if (op == ADD)
        {
            x += y;
        }
        else if (op == SUBTRACT)
        {
            x -= y;
        }
        else if (op == MULTIPLY)
        {
            x = x * y;
        }
        else if (op == DIVIDE)
        {
            x =  x / y;
        }
        else if (op == CHANGE)
        {
            x = y;
        }

        contador += 1;
        return scanf_check(n, x, contador);
    }


    printf("Valor final: %.2f", x);

}

int main()
{
    int n;
    double x;
    scanf("%d%lf\n", &n, &x);


    if (n > 0)
    {
        scanf_check(n, x, 0);
    }
    else if(n == 0)
    {
        printf("Valor final: %.2f", x);
    }
    else
    {
        printf("SEM RESPOSTA");
    }

    return 0;
}