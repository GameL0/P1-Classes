#include <stdio.h>

int verifica_sequencia(int i, int tam, int array_g[], int acumulador, int acumulador_anterior)
{
    if (i >= tam - 1)
    {
        if (acumulador > acumulador_anterior)
        {
            return acumulador;
        }
        else
        {
            return acumulador_anterior;
        }
    }

    if (array_g[i] != array_g[i + 1])
    {
        acumulador++;
    }
    else
    {
        acumulador_anterior = acumulador;
        acumulador = 1;
    }

    return verifica_sequencia(i + 1, tam, array_g, acumulador, acumulador_anterior);
}




void ler_array(int i, int tam, int array_g[])
{
    if (i < tam)
    {
        scanf("%d", &array_g[i]);

    
        ler_array(i + 1, tam, array_g);    
    }
}



void loop(int n_grupos, int s_maior)
{
    if (n_grupos <= 0)
    {
        printf("%d\n", s_maior);
        return;
    }

    int s_atual;
    int tam;
    
    scanf("%d", &tam);
    
    int array_g[tam];
    
    ler_array(0, tam, array_g);


    s_atual = verifica_sequencia(0, tam, array_g, 1, 1);

    if (s_atual >= s_maior)
    {
        s_maior = s_atual;
    }


    loop(n_grupos - 1, s_maior);
}


int main()
{
    int n_grupos;

    scanf("%d", &n_grupos);

    loop(n_grupos, 0);


    return 0;
}