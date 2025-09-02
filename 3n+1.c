#include <stdio.h>

int par_impar(int n){
    if(n != 1){
        if((n % 2) == 0){
            n /= 2;
            par_impar(n);
        }
        else{
            n = (n * 3) + 1;
            par_impar(n);
        }
    }
    else{
        return n;
    }
}




int main(){

    int num1, num2;
    scanf("%d%d", &num1, num2);
    
    

    return 0;
}