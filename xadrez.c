#include <stdio.h>

int main() {

    // =========================
    // TORRE (usando FOR)
    // Move 5 casas para a direita
    // =========================
    int casasTorre = 5;

    printf("Movimento da Torre:\n");
    for (int i = 0; i < casasTorre; i++) {
        printf("Direita\n");
    }

    // =========================
    // BISPO (usando WHILE)
    // Move 5 casas na diagonal (Cima + Direita)
    // =========================
    int casasBispo = 5;
    int contadorBispo = 0;

    printf("\nMovimento do Bispo:\n");
    while (contadorBispo < casasBispo) {
        printf("Cima Direita\n");
        contadorBispo++;
    }

    // =========================
    // RAINHA (usando DO-WHILE)
    // Move 8 casas para a esquerda
    // =========================
    int casasRainha = 8;
    int contadorRainha = 0;

    printf("\nMovimento da Rainha:\n");
    do {
        printf("Esquerda\n");
        contadorRainha++;
    } while (contadorRainha < casasRainha);

    // =========================
    // CAVALO (loops aninhados: FOR + WHILE)
    // Move em "L": 2 casas para baixo + 1 casa para a esquerda
    // =========================
    int movimentosBaixo = 2;
    int movimentosEsquerda = 1;

    printf("\nMovimento do Cavalo:\n");

    // Loop FOR (movimento vertical - duas casas para baixo)
    for (int i = 0; i < movimentosBaixo; i++) {
        printf("Baixo\n");
    }

    // Loop WHILE (movimento horizontal - uma casa para a esquerda)
    int contador = 0;
    while (contador < movimentosEsquerda) {
        printf("Esquerda\n");
        contador++;
    }

    return 0;
}