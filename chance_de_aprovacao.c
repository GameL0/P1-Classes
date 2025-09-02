#include <stdio.h>

int main()
{
    double atividades_professor, atividades_feita, percent;
    scanf("%lf%lf", &atividades_professor, &atividades_feita);

    percent = (atividades_feita/ atividades_professor) * 100;

    if (percent >= 0 && percent < 20)
    {
        printf("%.2f%% 4,40%% Pessimo", percent);
    }
    if (percent >= 20 && percent < 40)
    {
        printf("%.2f%% 31,56%% Ruim", percent);
    }
    if (percent >= 40 && percent < 60)
    {
        printf("%.2f%% 56,82%% Bom", percent);
    }
    if (percent >= 60 && percent < 80)
    {
        printf("%.2f%% 80,00%% Muito Bom", percent);
    }
    if (percent >= 80 && percent < 100)
    {
        printf("%.2f%% 94,00%% Excelente", percent);
    }


    return 0;
}