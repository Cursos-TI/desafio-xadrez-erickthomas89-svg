#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.
//Por: Erick Moraes - 26/03/2026

int main() {
    // Variáveis para contar os movimentos de cada peça
    int torre = 5; // A torre pode se mover até 5 vezes
    int bispo = 1; // O bispo pode se mover até 5 vezes, mas começamos com 1 para demonstrar o uso do while
    int rainha = 0; // A rainha pode se mover até 8 vezes, mas começamos com 0 para demonstrar o uso do do-while
    

    // Saída de boas-vindas e instruções para o usuário
    printf("Escolha a peça que deseja movimentar:\n");
    
    // Exibe as opções de peças para o usuário escolher
    printf("1 - Torre\n");
    printf("2 - Bispo\n");  
    printf("3 - Rainha\n");
    
    // Solicita ao usuário que escolha a peça que deseja movimentar
    printf("Digite o número da peça que deseja movimentar: \n"); 

    int escolha;           // Variável para armazenar a escolha do usuário
    scanf("%d", &escolha); // Entrada do número da peça que o usuário deseja movimentar

    printf("Movimentando a peça escolhida...\n");

    if (escolha == 1) {                   // Se a escolha for 1, movimenta a torre
        for (int i = 0; i < torre; i++) { // Estrutura for para movimentar a torre
            printf("Direita!\n");         // Saída indicando que a torre se move para a direita
        }
    } 
    else if (escolha == 2) {            // Se a escolha for 2, movimenta o bispo
        while (bispo <= 5) {            // Estrutura while para movimentar o bispo, verificando a condição no início do bloco
            printf("Cima, Direita!\n"); // Saída indicando que o bispo se move para cima e para a direita
            bispo++;                    // Incremento do bispo, equivalente a bispo = bispo + 1
        }
    } 
    else if (escolha == 3) {      // Se a escolha for 3, movimenta a rainha
        do {
            printf("Esquerda\n"); // Saída indicando que a rainha se move para a esquerda
            rainha++;             // Incremento da rainha, equivalente a rainha = rainha + 1
        } while (rainha < 8);     // Estrutura do-while para movimentar a rainha, verificando a condição no final do bloco
    } 
    else {
        printf("Opção inválida!\n"); // Saída indicando que a opção escolhida é inválida, caso o usuário digite um número diferente de 1, 2 ou 3
    }

    return 0;
}
