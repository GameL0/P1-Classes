#include <stdio.h>

int main(){

    int num1, rest;

    scanf("%d%d", &num1);

    rest = num1 % 2;

    if (rest == 0)
    {
        printf("Número é par");
    }
    else
    {
        printf("Número é ímpar");
    }
    return 0;
}