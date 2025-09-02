#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){
	double nota1;
	double nota2;
	double nota3;
	
	scanf("%lf %lf %lf", &nota1, &nota2, &nota3);

	double media = (nota1 + nota2 + nota3) / 3;
	double mediap1 = ((nota1 * 2) + (nota2 * 2) + (nota3 * 3)) / 7;
	double mediap2 = ((nota1 * 1) + (nota2 * 2) + (nota3 * 2)) / 5;

	printf("%.2f\n", media);
	printf("%.2f\n", mediap1);
	printf("%.2f\n", mediap2);


	return 0;
}