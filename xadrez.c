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
    int movimento = 1;
    while (movimento --) //Utilização do loop while para o movimento do Cavalo
    {
        for (int y = 0; y < 2; y++) { //Cavalo 2 casas para Cima
        printf("Cima\n");}
        printf("Direita\n"); //Cavalo 1 casa para Direita
    }
    
    

      



    return 0;
}
