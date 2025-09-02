#include <stdio.h>
#define MAX 100

// Vetor para armazenar as notas dos alunos
double notas_acumuladas[MAX];

/* Função recursiva para calcular o tamanho de uma string */
int tam_string(char r_aluno[], int n) {
    if (r_aluno[n] == '\0') 
        return 0;
    return 1 + tam_string(r_aluno, n + 1);
}

/* Função recursiva para comparar o gabarito com a resposta do aluno,
   retornando o total de acertos (que serão usados como "nota") */
int confere_r(char gabarito[], char r_aluno[], int i, int tam, int nota) {
    if (i >= tam)
        return nota;
    if (gabarito[i] == r_aluno[i])
        nota++;
    return confere_r(gabarito, r_aluno, i + 1, tam, nota);
}

/* Função recursiva que conta quantas vezes a "nota" x aparece no vetor 'notas'
   a partir do índice i até total */
int contar_ocorrencias(double notas[], int i, int total, double x) {
    if (i >= total)
        return 0;
    return ((notas[i] == x) ? 1 : 0) + contar_ocorrencias(notas, i + 1, total, x);
}

/* Função recursiva para encontrar a maior frequência de ocorrência entre as notas */
int encontrar_maior_frequencia(double notas[], int i, int total, int atual) {
    if (i >= total)
        return atual;
    int freq = contar_ocorrencias(notas, 0, total, notas[i]);
    if (freq > atual)
        atual = freq;
    return encontrar_maior_frequencia(notas, i + 1, total, atual);
}

/* Função recursiva auxiliar para verificar se uma nota já foi impressa,
   analisando os índices anteriores a 'i' */
int nota_ja_impressa(double notas[], int i, double x) {
    if (i < 0)
        return 0;
    if (i == 0)
        return 0;
    return (notas[i] == x) ? 1 : nota_ja_impressa(notas, i - 1, x);
}

/* Função recursiva para imprimir as notas que apareceram 'max' vezes,
   evitando repeti-las se já foram mostradas */
void imprime_notas_mais_frequentes(double notas[], int i, int total, int max) {
    if (i >= total)
        return;
    // Verifica se a nota atual não foi impressa antes (usando índices anteriores)
    if (!nota_ja_impressa(notas, i - 1, notas[i])) {
        int freq = contar_ocorrencias(notas, 0, total, notas[i]);
        if (freq == max)
            printf("Nota que mais apareceu: %.1f (apareceu %d vezes)\n", notas[i], freq);
    }
    imprime_notas_mais_frequentes(notas, i + 1, total, max);
}

/* Função que integra a lógica para processar (encontrar o modo) as notas */
void processa_mode(double notas[], int total) {
    int max = encontrar_maior_frequencia(notas, 0, total, 0);
    imprime_notas_mais_frequentes(notas, 0, total, max);
}

/* Função recursiva para correção dos alunos.
   Além de calcular a nota e acumular o percentual de aprovados,
   ela armazena cada nota em 'notas_acumuladas'. */
void correcao_alunos(char gabarito[], int aluno_aprovado, int total_alunos) {
    int i_aluno;
    char r_aluno[10];
    int tam;
    double nota_aluno;

    scanf("%d", &i_aluno);
    
    if (i_aluno == 9999) {
        double percent = (double) aluno_aprovado / total_alunos * 100.0;
        printf("Percentual de aprovados: %.1f%%\n", percent);
        // Ao finalizar, processamos as notas para ver qual apareceu mais
        processa_mode(notas_acumuladas, total_alunos);
        return;
    }

    scanf("%s", r_aluno);
    tam = tam_string(r_aluno, 0);
    nota_aluno = confere_r(gabarito, r_aluno, 0, tam, 0);
    printf("%d %.1f\n", i_aluno, nota_aluno);

    // Armazena a nota calculada no vetor global, na posição correspondente
    notas_acumuladas[total_alunos] = nota_aluno;

    if (nota_aluno >= 6.0)
        aluno_aprovado++;

    correcao_alunos(gabarito, aluno_aprovado, total_alunos + 1);
}

int main() {
    char gabarito[10];
    scanf("%s", gabarito);
    correcao_alunos(gabarito, 0, 0);
    return 0;
}
