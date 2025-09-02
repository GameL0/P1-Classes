#include <stdio.h>

int main()
{
    int number;
    scanf("%d", &number);

    int suces = number + 1;
    int antes = number - 1;

    printf("%d %d", antes, suces);
    return 0;
}