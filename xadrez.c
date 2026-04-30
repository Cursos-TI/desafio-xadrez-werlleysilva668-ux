#include <stdio.h>

// =========================
// TORRE (RECURSIVO)
// Move para a direita
// =========================
void moverTorre(int casas) {
    if (casas <= 0) return; // condição de parada

    printf("Direita\n");
    moverTorre(casas - 1); // chamada recursiva
}

// =========================
// RAINHA (RECURSIVO)
// Move para a esquerda
// =========================
void moverRainha(int casas) {
    if (casas <= 0) return;

    printf("Esquerda\n");
    moverRainha(casas - 1);
}

// =========================
// BISPO (RECURSIVO + LOOPS ANINHADOS)
// Movimento diagonal: Cima + Direita
// =========================
void moverBispo(int casas) {
    if (casas <= 0) return;

    // Loop externo (vertical)
    for (int i = 0; i < 1; i++) {

        // Loop interno (horizontal)
        for (int j = 0; j < 1; j++) {
            printf("Cima Direita\n");
        }
    }

    moverBispo(casas - 1); // recursividade
}

// =========================
// CAVALO (LOOPS COMPLEXOS)
// Movimento em L: 2 casas Cima + 1 Direita
// =========================
void moverCavalo() {

    int cima = 2;
    int direita = 1;

    // Loop externo controla etapas
    for (int i = 0; i < 2; i++) {

        // Loop interno controla direção
        int j = 0;
        while (j < 2) {

            // Primeiras duas movimentações → CIMA
            if (i == 0 && j < cima) {
                printf("Cima\n");
            }

            // Terceira movimentação → DIREITA
            else if (i == 1 && j == 0) {
                printf("Direita\n");
                break; // encerra após movimento correto
            }

            j++;
        }

        // Evita repetição desnecessária
        if (i == 1) {
            continue;
        }
    }
}

// =========================
// FUNÇÃO PRINCIPAL
// =========================
int main() {

    int casasTorre = 5;
    int casasBispo = 5;
    int casasRainha = 8;

    printf("Movimento da Torre:\n");
    moverTorre(casasTorre);

    printf("\nMovimento do Bispo:\n");
    moverBispo(casasBispo);

    printf("\nMovimento da Rainha:\n");
    moverRainha(casasRainha);

    printf("\nMovimento do Cavalo:\n");
    moverCavalo();

    return 0;
}