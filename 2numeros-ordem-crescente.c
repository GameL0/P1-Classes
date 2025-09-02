#include <stdio.h>

int main (){

    int number1;
    int number2;

    scanf("%d %d", &number1, &number2);

    if (number1 > number2 || number1 == number2){
        printf("%d %d\n", number2, number1);
    }
    else {
        printf("%d %d\n", number1, number2);
    }

    return 0;
}