#include <stdio.h>

int main(){

    int number1;
    int number2;

    scanf("%d %d", &number1, &number2);


    if (number1 > number2){
        printf("%d\n",1);
    }
    else{
        printf("%d\n",0);
    }
    if (number1 == number2){
        printf("%d\n",1);
    }
    else{
        printf("%d\n",0);
    }
    if (number1 < number2){
        printf("%d\n",1);
    }
    else{
        printf("%d\n",0);
    }
    if (number1 != number2){
        printf("%d\n",1);
    }
    else{
        printf("%d\n",0);
    }
    if (number1 >= number2){
        printf("%d\n",1);
    }
    else{
        printf("%d\n",0);
    }
    if (number1 <= number2){
        printf("%d\n",1);
    }
    else{
        printf("%d\n",0);
    }


    return 0;
}