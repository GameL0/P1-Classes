#include <stdio.h>

int sequencia_numero(int i, int ciclo){
    
    if (i == 1)
    {
        return ciclo;
    }
    
    
    if (i % 2 == 0){
        i /= 2;
        ciclo++;
    }
    else{
        i = (3 * i) + 1;
        ciclo++;
    }


    return sequencia_numero(i, ciclo);

}



int verifica_numero(int i, int j, int ciclo, int maior_ciclo){
    if (i > j)
    {
        return maior_ciclo;
    }
    
    ciclo = sequencia_numero(i, 1);
    
    if (ciclo >= maior_ciclo){
        maior_ciclo = ciclo;
    }
    


    return verifica_numero(i + 1, j, ciclo, maior_ciclo);

}




void loop(){
    int i, j;
    if (scanf("%d%d", &i, &j) == 2)
    {

        printf("%d %d ", i, j);

        if (i >= j)
        {
            printf("%d\n", verifica_numero(j, i, 1, 1));
        }
        else
        {
            printf("%d\n", verifica_numero(i, j, 1, 1));
        }


        loop();
    }
    else
    {
        return;
    }


}



int main(){

    loop();
    return 0;
}