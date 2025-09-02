#include <stdio.h>

int main() 
{
    int pedro, tulio, gabriel, yanka, paloma, vinicius, elias;
    int casa1 = 0, casa2 = 0, casa3 = 0;
    int valor_casa1 = 0, valor_casa2 = 0, valor_casa3 = 0;

    scanf("%d%d%d%d%d%d%d",&pedro, &tulio, &gabriel, &yanka, &paloma, &vinicius, &elias);

    if (pedro >= 7600 && pedro < 8400)
    {
        casa2 += 1;
    }
    else if (pedro >= 8400)
    {
        casa1 += 1;
        casa2 += 1;
        casa3 += 1;
    }

    if (tulio >= 4800 && tulio < 5200)
    {
        casa1 += 1;
    }
    else if (tulio>=5200 && tulio<6000)
    {
        casa1 += 1;
        casa2 += 1;
    }
    else if (tulio >= 6000)
    {
        casa1 += 1;
        casa2 += 1;
        casa3 += 1;
    }

    if (gabriel >= 5600 && gabriel < 6400)
    {
        casa1 += 1;
    }
    else if (gabriel >=6400 && gabriel<7200)
    {
        casa1 += 1;
        casa2 += 1;
    }
    else if (gabriel >= 7200)
    {
        casa1 += 1;
        casa2 += 1;
        casa3 += 1;
    }
    
    if (yanka >= 4400 && yanka < 4800)
    {
        casa1 += 1;
    }
    else if (yanka >=4800 && yanka <5200)
    {
        casa1 += 1;
        casa2 += 1;
    }
    else if (yanka >= 5200)
    {
        casa1 += 1;
        casa2 += 1;
        casa3 += 1;
    }

    if (paloma >= 4800 && paloma < 5600)
    {
        casa1 += 1;
    }
    else if (paloma >= 5600)
    {
        casa1 += 1;
        casa2 += 1;
        casa3 += 1;
    }

    if (vinicius >= 5600 && vinicius < 5800)
    {
        casa1 += 1;
    }
    else if (vinicius >= 5800 && vinicius < 6000)
    {
        casa1 += 1;
        casa3 += 1;
    }
    else if (vinicius >= 6000)
    {
        casa1 += 1;
        casa2 += 1;
        casa3 += 1;
    }

    if (elias >= 7600 && elias < 8400)
    {
        casa1 += 1;
        casa3 += 1;
    }
    else if (elias >= 8400)
    {
        casa1 += 1;
        casa2 += 1;
        casa3 += 1;
    }

    valor_casa1 = casa1 * 10;
    valor_casa2 = casa2 * 20;
    valor_casa3 = casa3 * 30;

    if (casa1 == 0 && casa2 == 0 && casa3 == 0)
    {
        printf("NAO TERA SHOW!\n");
    }
    else if (valor_casa1 >=  valor_casa2 && valor_casa1 >= valor_casa3)
    {
        printf("CASA 1\n%d\n%d\n",valor_casa1 ,casa1);
    }
    else if (valor_casa2 >=  valor_casa1 && valor_casa2 >= valor_casa3)
    {
        printf("CASA 2\n%d\n%d\n",valor_casa2 ,casa2);
    }
    else
    {
        printf("CASA 3\n%d\n%d\n",valor_casa3 ,casa3);
    }
    return 0;
}


