#include <stdio.h>

int main(){

    // Variáveis de passos, horas e total de passos
    int passos, horas = 0, total = 0;

    // While para somar os passos até atingir 10000 e acrescentar horas.
    while(total < 10000){

    printf("Digite a quantidade de passos dados: ");
    scanf("%d", &passos);

        total += passos;
        horas++;
    }
    // Exibe o resultado final de passos e horas necessárias para atingir 10000 passos.

    printf("Horas necessárias para antigir 10000 passos: %d\n", horas);
    printf("Total de passos dados: %d\n", total);

    return 0;
}