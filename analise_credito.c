#include <stdio.h>

int main()
{
    double salary, limit_used;
    scanf("%lf%lf", &salary, &limit_used);

    double available_limited = (salary * 0.30) - limit_used;

    if (available_limited <= 0)
    {
        printf("%.2f", 0.00);
    }
    else 
    {
        printf("%.2f", available_limited);
    }

    return 0;
}