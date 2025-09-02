#include <stdio.h>
#define TRIANGULO 't'
#define RETANGULO 'r'
#define CIRCULO 'c'

#define CHUVA 'c'
#define SOL 's'
#define NEVE 'n'



double calcular_area(int largura, int altura, char formato)
{
    if (formato == TRIANGULO)
    {
        return (largura * altura / 2.0);
    }
    else if(formato == RETANGULO)
    {
        return largura * altura;
    }
    else 
    {
        return 3.14 * largura * largura;
    }
}


int main()
{
    int racao, tempo_sono;
    int largura, altura;
    char formato_area;
    char clima_dia_anterior;
    int impacto_clima;
    int horas_trabalhadas_anterior;
    
    double disposicao, area, tempo_patrulha;

    scanf("%d%d", &racao, &tempo_sono);
    scanf("%d%d\n", &largura, &altura);
    scanf("%c\n", &formato_area);
    clima_dia_anterior = getchar();
    scanf("%d%d", &impacto_clima, &horas_trabalhadas_anterior);

    disposicao = racao * (tempo_sono / 60.0);

    if (horas_trabalhadas_anterior > 6)
    {
        disposicao = disposicao * 0.8;
    }


    if ( calcular_area(largura, altura, area) > 500)
    {
        disposicao *= 0.85;
    }

    if (area > 500)
    {
        disposicao *= 0.85;
    }

    if (clima_dia_anterior == CHUVA)
    {
        disposicao *= (0.3 * (impacto_clima / 100.0));
    }
    else if (clima_dia_anterior == SOL)
    {
        disposicao *= (1.47 * (impacto_clima / 100.0));
    }
    else
    {
        disposicao *= (0.67 * (impacto_clima / 100.0));
    }
    
    tempo_patrulha = disposicao / area;

    if (tempo_patrulha < 1)
    {
        tempo_patrulha = 1;
    }

    printf("Aim trabalhou %.2lf horas e recebeu: %.2lf Reais\n", tempo_patrulha, tempo_patrulha * 70);

    return 0;
}