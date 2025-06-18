#include <stdio.h>

// Função recursiva da Torre 
void moverTorre(int casas) {
    if (casas <= 0) return; 
    printf("Direita\n");
    moverTorre(casas - 1);
}

// Função recursiva do Bispo usando loops aninhados
void moverBispo(int casas) {
    if (casas <= 0) return;

    for (int vertical = 0; vertical < casas; vertical++) {
        for (int horizontal = 0; horizontal < 1; horizontal++) {
            printf("Cima, Direita\n");
        }
    }
}

// Função recursiva da Rainha
void moverRainha(int casas) {
    if (casas <= 0) return; 
    printf("Esquerda\n");
    moverRainha(casas - 1);
}

// Função do Cavalo com loops aninhados complexos
void moverCavalo() {
    int movimentosParaCima = 2;
    int movimentosParaDireita = 1;
    int countCima = 0;
    int countDireita;

    // Loop for para cima
    for (int i = 0; i < movimentosParaCima; i++) {
        // Movimento para cima, casa a casa
        printf("Cima\n");
        
        // Loop while para direita, executa somente após o movimento para cima completo
        countDireita = 0;
        while (countDireita < movimentosParaDireita) {
            // Se já moveu todas as casas para cima, então move para direita
            if (i == movimentosParaCima - 1) {
                printf("Direita\n");
                countDireita++;
            } else {
                // Enquanto não chegar na última casa para cima, não move direita
                break;
            }
        }
    }
}

int main() {
    // Número de casas para movimentação
    const int casasTorre = 5;
    const int casasBispo = 5;
    const int casasRainha = 8;

    // Chamada dos movimentos

    printf("Movimento da Torre:\n");
    moverTorre(casasTorre);
    printf("\n");

    printf("Movimento do Bispo:\n");
    moverBispo(casasBispo);
    printf("\n");

    printf("Movimento da Rainha:\n");
    moverRainha(casasRainha);
    printf("\n");

    printf("Movimento do Cavalo:\n");
    moverCavalo();

    return 0;
}

