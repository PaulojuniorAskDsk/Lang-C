#include <stdio.h>
 
int main() {
    for (int i = 0; i < 10; i++) {
        //continue e usado para pular a iteração atual do loop e continuar com a próxima
        if (i == 5) continue; // Pula a iteração quando i é 5
        //break e usado para sair completamente do loop
        if (i == 8) break;    // Sai do loop quando i é 8

        printf("%d ", i);
    }
    return 0;
}