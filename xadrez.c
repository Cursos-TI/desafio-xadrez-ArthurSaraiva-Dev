#include <stdio.h>

void movBispo(int bispo){
    if(bispo <= 0){
        return; // Definindo o caso base: quando a variável "bispo" chega a zero a recursão se encerra
    }

    for (int y = 0; y < 1; y++){ // Movimento vertical
        printf("Cima\n");
        for(int x = 0; x < 1; x++){ // Movimento Horizontal
            printf("Direita\n");
        }

    }
    movBispo(bispo - 1);
    
}

void movTorre(int torre){
    if(torre <= 0){
        return; // Definindo o caso base: quando a variável "torre" chega a zero a recursão se encerra
    }

    printf("Direita\n");

    movTorre(torre - 1);
}

void movRainha(int rainha){
    if(rainha <= 0){
        return; // Definindo o caso base: quando a variável "torre" chega a zero a recursão se encerra
    }

    printf("Esquerda\n");

    movRainha(rainha - 1);
}

void movCavalo(int cavalo) {
    
    for (int mov = 1; mov <= cavalo; mov++) { // loop externo
        for (int cima = 1; cima <= 2; cima++) { // loop interno
            if (cima == 2 && mov % 2 == 0) { // condição para pular um movimento
                printf("[Pulou!] "); // caso pule
                continue; 
            }
            printf("Cima, "); //movimento
        }
        
        for (int dir = 1; dir <= 1; dir++) { // lopp interno de movimento
            printf("Direita"); // movimento
        }
        printf("\n"); // quebra de linha
    }
}
int main() {
    // Nível Novato - Movimentação das Peças
    
    // int bispo = 1, torre = 1, rainha;
    
    // Implementação de Movimentação do Bispo
    /* printf("*** BISPO ***\n");
        while (bispo <= 5){
        printf("Cima\n");
        printf("Direita\n");
        bispo++;
    */

    // Implementação de Movimentação da Torre
    /* printf("*** TORRE ***\n");
    do{
        if (torre <= 5)
        {
            printf("Direita\n");
            torre++;
        }
        
    } while (torre <= 5);
    */
    
    // Implementação de Movimentação da Rainha
    /*
    printf("*** RAINHA ***\n");
    // Lógica de movimentação:
    for (rainha = 1; rainha <= 8; rainha++){
        printf("Esquerda\n");
    }
    */

    
    // Nível Aventureiro - Movimentação do Cavalo
    /*
    printf("*** CAVALO ***\n");
    // Movimentação utilizando o for
    int movE = 1; // Controta a movimentação em L para a esquerda.
    int movB = 0; 
    for(movE; movE == 1; movE--){
        while (movB < 2)
        {
            printf("Cima, ");
            movB++;
        }
        printf("Esquerda\n"); // Retorna a movimentação para a esquerda
    }
    */

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    
    //Bispo
    printf("*** BISPO ***\n");
    movBispo(5);

    //Torre
    printf("*** TORRE ***\n");
    movTorre(5);

    //Rainha
    printf("*** RAINHA ***\n");
    movRainha(8);

    //Cavalo
    printf("*** CAVALO ***\n");
    movCavalo(1);
    return 0;
}
