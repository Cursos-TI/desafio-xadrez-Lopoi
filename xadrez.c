#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main()
{
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
    int movimento_bispo = 5;
    int movimento_torre = 5;
    int movimento_rainha = 8;

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.
    printf("Movimentação do Bispo\n");
    do {
        printf("Cima, Direita\n");
        movimento_bispo--;
    } while (movimento_bispo > 0);
    printf("----------------------\n");
    printf("Movimentação da Torre\n");
    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.
    while (movimento_torre > 0)
    {
        printf("Direita\n");
        movimento_torre--;
    }
    printf("----------------------\n");
    printf("Movimentação da Rainha\n");
    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.
    for (int i = 0; i < movimento_rainha; i++)
    {
        printf("Esquerda\n");
    }
    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.
    
    printf("----------------------\n");
    printf("Movimentação da Cavalo\n");
    int cavalo_curto = 1;
    int cavalo_longo = 2;
    for(int i = 0; i < cavalo_curto; i++) {
        int helper = cavalo_longo;
        while(helper > 0){
            printf("Baixo\n");
            helper--;
        }
        printf("Esquerda\n");
    }

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
