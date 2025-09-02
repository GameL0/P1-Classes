#include <stdio.h>



void loop(int qtd_professor, int qtd_cafe)
{
    
    if (qtd_professor <= 0)
    {
        printf("%d\n", qtd_cafe);
        printf("%d\n", (qtd_cafe * 2 / 7));
        return;
    }

    int n;
    char tipo;

    scanf("%d", &n);
    scanf(" %c", &tipo);

    if (tipo == 'P' || tipo == 'p')
    {
        qtd_cafe += n * (10);
    }
    else if (tipo == 'G' || tipo == 'g')
    {
        qtd_cafe += n * (16);
    }

    loop(qtd_professor - 1, qtd_cafe);

}



int main()
{
    // 1 capsula -> 2 duas xicaras
    // caixas pequenas (10 un) e caixas grandes (16 un)
    // 7 professores
    loop(7, 0);

    return 0;
}