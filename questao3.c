#include <stdio.h>

int main(){

    //variáveis de nota, média, soma e uma variável index.
    int nota, media, soma = 0;
    int i;

    //Print na tela pedindo para o usuário avaliar o atendimento de 0 a 10.
    printf("Por favor, nos avalie de 0 a 10, sendo 0 muito insatisfeito e 10 muito satisfeito: \n");

    //For para receber a nota do usuário e fazer a soma das notas.
    for(i = 1; i < 10; i++){
        printf("Avalie nosso atendimento: \n");
        scanf("%d", &nota);
        soma += nota;
    }

    //Final do for, calcula a média das notas e faz uma condicional para printar na tela a mensagem de acordo com a média.
    media = soma / 10;

    if(media < 7){
            printf("Agradecemos seu feedback, vamos melhorar nosso atendimento!\n");
        }
        else if(media >= 7){
            printf("Agradecemos seu feedback, ficamos felizes que tenha gostado do nosso atendimento!\n");
        }

    return 0;


}