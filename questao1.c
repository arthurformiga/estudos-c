#include <stdio.h>

int main () {

    //variáveis de consumo, soma, média e uma variável index.
    float consumo, soma = 0, media;
    int i;

    //Laço de repetição para receber o que o usuário digitar e fazer o cálculo da da soma + consumo.

    for(i = 1; i <= 5; i++) {
        printf("Digite o consumo de agua do morador %d: ", i);
        scanf("%f", &consumo);
        soma += consumo;

        //Uma condicional que verifica se o consumo é maior que 10, se for printa na tela que o consumo é maior que a média.

        if(consumo > 10) {
            printf("O consumo de agua do morador %d foi maior que a media\n", i);

            //Se não, printa na tela que o consumo é menor ou igual a média.

        }else {
            printf("O consumo de agua do morador %d foi abaixo ou igual a media\n", i);
        }
    }

    //Ao final do for, calcula a média e printa na tela o total de consumo de água.

    media = soma / 5;
    printf("A media do consumo de agua dos moradores eh: %.2f\n", media);
    return 0;
}