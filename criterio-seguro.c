#include <stdio.h>

int main()
{
    int sexo, idade_maior_40;
    scanf("%d%d", &sexo, &idade_maior_40);

    if ((sexo == 0 || sexo == 1) && (idade_maior_40 == 0 || idade_maior_40 == 1))
    {
        if (sexo == 0 && idade_maior_40 == 0)
        {
            printf("%d", 0);
        }
        else if (sexo == 0 && idade_maior_40 == 1)
        {
            printf("%d", 1);
        }
        else
        {
            printf("%d", 0);
        }
    }


    return 0;
}