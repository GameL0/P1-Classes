#include <stdio.h>
#include <math.h>

void check_scanf(int num_ordem, int num_percent, int ip1, int ip2, int ip3, int ip4)
{
    // Condição de parada para garantir que a função execute exatamente 32 vezes
    if (num_ordem > 31)  
    {
        printf("%d.%d.%d.%d\n", ip1, ip2, ip3, ip4);
        return;
    }

    int binario;
    int calc_binario;
    scanf("%d", &binario);

    calc_binario = pow(2, num_percent);

    if (num_ordem >= 0 && num_ordem <= 8)
    {
        ip1 += calc_binario * binario;
    }
    else if (num_ordem >= 9 && num_ordem <= 16)
    {
        ip2 += calc_binario * binario;
    }
    else if (num_ordem >= 17 && num_ordem <= 24)
    {
        ip3 += calc_binario * binario;
    }
    else if (num_ordem >= 25 && num_ordem <= 32)
    {
        ip4 += calc_binario * binario;
    }

    printf("%d\n", num_percent);
    num_ordem += 1;
    num_percent -= 1;

    if (num_percent == -1)
    {
        num_percent = 7;
    }

    // Chama a recursão para a próxima leitura
    check_scanf(num_ordem, num_percent, ip1, ip2, ip3, ip4);
}

int main()
{
    check_scanf(0, 7, 0, 0, 0, 0);
    return 0;
}