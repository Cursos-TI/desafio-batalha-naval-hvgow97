#include <stdio.h>

// Desafio Batalha Naval - Nível Aventureiro
// Desenvolvido por Hugo Nascimento - Estácio

int main() {
    int tabuleiro[10][10] = {0};  // Matriz 10x10 preenchida inicialmente com zeros

    // Navio horizontal - Linha 2, Colunas 1 a 4
    for(int i = 1; i <= 4; i++) {
        tabuleiro[2][i] = 3;
    }

    // Navio vertical - Coluna 6, Linhas 4 a 7
    for(int i = 4; i <= 7; i++) {
        tabuleiro[i][6] = 3;
    }

    // Navio diagonal principal - De (0,0) até (3,3)
    for(int i = 0; i < 4; i++) {
        tabuleiro[i][i] = 3;
    }

    // Navio diagonal secundária - De (0,9) até (3,6)
    for(int i = 0; i < 4; i++) {
        tabuleiro[i][9 - i] = 3;
    }

    // Exibir o tabuleiro completo
    printf("Tabuleiro Batalha Naval (0 = água, 3 = navio):\n\n");
    for(int i = 0; i < 10; i++) {
        for(int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}
