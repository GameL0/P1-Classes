#include <stdio.h>

int main() {
    int N;
    int winners = 0;

    // Lê número de apostas
    scanf("%d", &N);

    // Armazena apostas: até 1000 apostas, até 10 números cada
    int all_bets[1000][10];
    int bet_sizes[1000];

    // Leitura das apostas
    for (int i = 0; i < N; i++) {
        int count = 0;
        int num;
        char sep;

        // Leitura de 6 a 10 números separados por vírgula, termina na quebra de linha
        do {
            scanf("%d", &num);
            all_bets[i][count] = num;
            count++;
            sep = getchar(); // lê separador: ',' ou '\n'
        } while (sep == ',');

        bet_sizes[i] = count;
    }

    // Lê resultado oficial (6 números separados por espaço)
    int result[6];
    for (int i = 0; i < 6; i++) {
        scanf("%d", &result[i]);
    }

    // Verifica quantos apostadores acertaram os 6 números
    for (int i = 0; i < N; i++) {
        int hits = 0;
        for (int k = 0; k < 6; k++) {
            for (int j = 0; j < bet_sizes[i]; j++) {
                if (all_bets[i][j] == result[k]) {
                    hits++;
                    break;
                }
            }
        }
        if (hits == 6) {
            winners++;
        }
    }

    // Imprime resultado
    printf("Total de ganhadores: %d\n", winners);
    return 0;
}
