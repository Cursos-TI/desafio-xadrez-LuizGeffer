#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.


void torre( int casas) { //Movimentação da Torre
    for(int x=0; x<casas; x++){
        printf("Direita\n");
       }
}

void bispo(int casas) {//Movimentação do Bispo
    for (int i = 0; i < casas; i++) { // loop externo para a direita
        printf("Direita\n");
         for (int j = casas - 1; j < casas; j++) {  // loop externo para cima     
        printf("Cima\n");
    }
    }
}

void rainha( int casas) {//Movimentação da Rainha
    for(int x=0; x<casas; x++){
        printf("Esquerda\n");
       }
}




int main() {
  
   torre(5); // Chamando a função torre para movimentar 5 casas a direita
   printf("\n");//Linha de sepação de peças
   bispo(5); // Chamando a função bispo para movimentar 5 casas 
   printf("\n");//Linha de sepação de peças
   rainha(8); // Chamando a função rainha para movimentar 8 casas a esquerda
   printf("\n");//Linha de sepação de peças


    



  
   

    printf("Cavalo\n\n");//Declarando a peça Cavalo
    for (int y = 0; y < 2; y++) { //Cavalo 2 casas para Cima
        printf("Cima\n");

        for (int x = 0; x<1 && y == 1 ; x++)
        {
            printf("Direita\n"); //Cavalo 1 casa para Direita
        }
        

    }



    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
