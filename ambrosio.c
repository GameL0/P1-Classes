#include <stdio.h>

int main(){
    double km_total;
    double dinheiro;
    double litros_tanque;
    double postos;
    double reais_litro;
    double eficiencia = 10;

    scanf("%lf %lf %lf %lf %lf", &km_total, &dinheiro, &litros_tanque, &postos, &reais_litro);

    if (km_total < (eficiencia * litros_tanque)){

        printf("Pode viajar.\n");
        printf("R$: %.0f\n", dinheiro);
    }
    else{

        double distancia_posto = km_total/(postos*2);

        if (distancia_posto < (eficiencia * litros_tanque) && distancia_posto > 0){
            double distancia_pendente = km_total - (litros_tanque * eficiencia);
            double litros_adicionados = (distancia_pendente/eficiencia);
            double gasto_total = (litros_adicionados * reais_litro);
            double balanco_final = dinheiro - gasto_total;
            
            if (balanco_final < 0){
                printf("Nao pode viajar.\n");
            }
            else {
            printf("Pode viajar.\n");
            printf("R$: %.0f\n", balanco_final);
            }
        }

        else {
            printf("Nao pode viajar.\n");
        }

    return 0;
    }
}   


