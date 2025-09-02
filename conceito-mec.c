#include <stdio.h>

int main()
{
    int livros, alunos;
    scanf("%d%d", &livros, &alunos);

    double nota_mec = alunos / livros;
    
    if (nota_mec <= 8)
    {
        printf("A");
    }
    else if (nota_mec >= 9 && nota_mec <= 12)
    {
        printf("B");
    }
    else if (nota_mec >= 13 && nota_mec <= 18)
    {
        printf("C");
    }
    else if (nota_mec >= 18)
    {
        printf("D");
    }
}