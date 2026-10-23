#include <stdio.h>

int main () {
    float consumo, soma = 0, media;
    int i;

    for(i = 1; i <= 5; i++) {
        printf("Digite o consumo de agua do morador %d: ", i);
        scanf("%f", &consumo);
        soma += consumo;

        if(consumo > 10) {
            printf("O consumo de agua do morador %d foi maior que a media\n", i);
        }else {
            printf("O consumo de agua do morador %d foi abaixo ou igual a media\n", i);
        }
    }
    media = soma / 5;
    printf("A media do consumo de agua dos moradores eh: %.2f\n", media);
    return 0;
}