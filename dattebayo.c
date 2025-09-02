#include <stdio.h>

void batalha(int i, int n_ninjas, int array_ninjas[], int energia, int ninjas_derrotados)
{
    if (i >= n_ninjas)
    {
        printf("Nível de energia: %d\n", energia);
        double percent = (double) ninjas_derrotados /  n_ninjas * 100;
        printf("%.2f%%\n", percent);

        if (energia > 20000)
        {
            printf("Marquinhos é o novo Mestre da Vila da Árvore!\n");
        }
        else
        {
            printf("Continue tentando!\n");
        }

        return;
    }

    int num_ordem;

    scanf("%d", &num_ordem);

    if (energia >= array_ninjas[num_ordem - 1])
    {
        energia += (energia - array_ninjas[num_ordem - 1]);
        ninjas_derrotados++;
    }

    batalha(i + 1, n_ninjas, array_ninjas, energia, ninjas_derrotados);

    
}

void ler_array(int i, int n_ninjas, int array_ninjas[])
{
    if (i < n_ninjas)
    {
        scanf("%d", &array_ninjas[i]);

        ler_array(i + 1, n_ninjas, array_ninjas);
    }
}

int main()
{
    int energia;
    int n_ninjas;
    
    scanf("%d%d", &energia, &n_ninjas);
    int array_ninjas[n_ninjas];
    
    ler_array(0, n_ninjas, array_ninjas);

    batalha(0, n_ninjas, array_ninjas, energia, 0);

    return 0;
}