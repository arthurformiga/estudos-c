#include <stdio.h>

int main(){

    //variáveis de saldo e saldo final, e uma variável index.

    float saldo = 0, saldoFinal = 0;
    int i;

    //Laço de repetição para receber o que o usuário digitar e fazer o cálculo do saldo final.

    for(i = 1; i < 10; i++) {

    printf("Digite o valor da moeda que deseja depositar: \n");

    printf("0,50R$ \n");

    printf("1,00R$ \n");

    printf("2,00R$ \n");  

    scanf("%f", &saldo);

    //Uma condicional que verifica se o saldo é diferente de 0,50, 1,00 e 2,00.
    if(saldo != 0.50 && saldo != 1.00 && saldo != 2.00) {
        printf("Valor invalido, tente novamente!\n");
        break; // Decrementa i para repetir a iteração

        //se for printa na tela que o valor é inválido o break é utilizado para barrar o programa.

    }else {
        saldoFinal += saldo;
        continue;
    }

    //Se não, printa na tela que o valor é válido e faz a soma do saldo final.

    }

    //Ao final do for, printa na tela o saldo final.

    printf("Saldo final: %.2f\n", saldoFinal);
    return 0;

}