#include <stdio.h>

int main() {
    // Definindo o número de casas a serem movidas
    const int torreMovimento = 5;
    const int bispoMovimento = 5;
    const int rainhaMovimento = 8;

    // Movimento da Torre: 5 casas para a direita
    printf("Movimento da Torre:\n");
    for (int i = 0; i < torreMovimento; i++) {
        printf("Direita\n");
    }

    // Movimento do Bispo: 5 casas na diagonal (cima e direita)
    printf("\nMovimento do Bispo:\n");
    int j = 0;
    while (j < bispoMovimento) {
        printf("Cima, Direita\n");
        j++;
    }

    // Movimento da Rainha: 8 casas para a esquerda
    printf("\nMovimento da Rainha:\n");
    int k = 0;
    do {
        printf("Esquerda\n");
        k++;
    } while (k < rainhaMovimento);

    return 0;
}
