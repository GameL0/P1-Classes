#include <stdio.h>

int main()
{
    double value;
    scanf("%le", &value);

    double total = value * 1.1; 

    printf("%.2f", total);
    return 0;
}