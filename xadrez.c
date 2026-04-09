#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.
// Inclusão da peça cavalo
// inclusão da recursividade para torre, bispo e rainha
// Por: Erick Moraes - 01/02/2026

// ================= FUNÇÕES RECURSIVAS =================

// -------- TORRE (recursiva) --------
// Move para a direita N vezes
void moverTorre(int casas) { // função recursiva para movimentar a torre
    if (casas == 0) return; // condição de parada

    printf("Direita\n");   // movimento para a direita
    moverTorre(casas - 1); // chamada recursiva
}

// -------- RAINHA (recursiva) --------
// Move para a esquerda N vezes
void moverRainha(int casas) { // função recursiva para movimentar a rainha
    if (casas == 0) return;   // condição de parada

    printf("Esquerda\n");    // movimento para a esquerda
    moverRainha(casas - 1);  // chamada recursiva
}

// -------- BISPO (recursivo + loops aninhados) --------
// Movimento diagonal: cima + direita
void moverBispo(int casas) { // função recursiva para movimentar o bispo
    if (casas == 0) return;  // condição de parada

    // loop externo (vertical)
    for (int v = 0; v < 1; v++) { // controle do movimento vertical
        printf("Cima, "); // movimento vertical 

        // loop interno (horizontal)
        for (int h = 0; h < 1; h++) { // controle do movimento horizontal
            printf("Direita\n");      // movimento horizontal
        }
    }

    moverBispo(casas - 1); // recursão
}

// ================= FUNÇÃO PRINCIPAL =================

int main() {

    // Quantidade de movimentos
    int casasTorre = 5;
    int casasBispo = 5;
    int casasRainha = 8;

    printf("Escolha a peça que deseja movimentar:\n"); // menu de opções para o usuário
    printf("1 - Torre\n");
    printf("2 - Bispo\n");
    printf("3 - Rainha\n");
    printf("4 - Cavalo\n");

    int escolha;
    scanf("%d", &escolha); // leitura da escolha do usuário

    printf("\nMovimentando...\n\n"); // mensagem de início do movimento

    // ================= ESCOLHAS =================

    if (escolha == 1) {            
        printf("=== TORRE ===\n"); // título para a torre
        moverTorre(casasTorre);    // chamada da função recursiva para a torre
    }

    else if (escolha == 2) {       // título para o bispo
        printf("=== BISPO ===\n"); // chamada da função recursiva para o bispo
        moverBispo(casasBispo); // chamada da função recursiva para o bispo
    }

    else if (escolha == 3) {        // título para a rainha
        printf("=== RAINHA ===\n"); // chamada da função recursiva para a rainha
        moverRainha(casasRainha);   
    }

    else if (escolha == 4) {        // título para o cavalo
        printf("=== CAVALO ===\n"); // movimento do cavalo utilizando loops aninhados

        // Loop externo controla repetições do movimento
        for (int movimento = 0; movimento < 1; movimento++) {

            // Loop interno controla as casas
            for (int passo = 0; passo < 3; passo++) {

                // Duas casas para cima
                if (passo < 2) {
                    printf("Cima\n");
                } 
                // Uma casa para direita
                else {
                    printf("Direita\n");
                }

                // Exemplo de controle com continue
                if (passo == 0) {
                    continue; // pula para próxima iteração
                }

                // Exemplo de break (apenas demonstração controlada)
                if (movimento == 1 && passo == 2) {
                    break;
                }
            }

            printf("\n"); // separação visual
        }
    }

    else {                           
        printf("Opção inválida!\n"); // mensagem de erro para opção inválida
    }

    return 0;
}