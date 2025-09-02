#include <stdio.h>
#include <math.h>


/*OBS: Clodes Ataca primeiro
Clodes vai atacar apenas quando tiver a garantia que irá ganhar
Bezaliel apenas vai atacar independente,
para o Clodes ganhar precisa que a quantidade de rodadas para ele morrer seja menor
que a quantidade de rodadas para ele matar o pokemon de */

void confronto(int v1, int v2, int d1, int d2)
{
    if (v1 <= 0)
    {
        printf("Bezaliel\n");
        return;
    }

    int rodadas_clodes = (v2 + d1 - 1) / d1;
    int rodadas_bezaliel = (v1 + d2 - 1) / d2;

    if (rodadas_clodes < rodadas_bezaliel)
    {
        printf("Clodes\n");
        return;
    }


    confronto(v1 - d2, v2, d1 + 50, d2);

}




void loop(int batalhas)
{
    if (batalhas <= 0) return;
    

    int v1, v2, d1, d2;
    scanf("%d%d%d%d", &v1, &v2, &d1, &d2);


    confronto(v1, v2, d1, d2);
    loop(batalhas - 1);
}



int main()
{
    int batalhas;
    scanf("%d", &batalhas);
    loop(batalhas);
    return 0;
}