// #include <stdio.h>

// float media(float nota1, float nota2, float nota3) {
//     return (nota1 + nota2 + nota3) / 3.0;
// }

// int main(){
//     float nota_aluno[3];
//     int i;

//     for(i = 0; i <3; i++){
//         printf("Digite a nota do aluno %d: ", i + 1);
//         scanf("%f", &nota_aluno[i]);
//     }

//     float resultado = media(nota_aluno[0], nota_aluno[1], nota_aluno[2]);
//     printf("A media do aluno e: %.2f\n", resultado);


//     return 0;
// }


// #include <stdio.h>

// int main() {
//     int numeros[5];
//     int i;

//     for( i = 0; i < 5; i++) {
//         printf("Digite um numero: \n");
//         scanf("%d", &numeros[i]);
//     }

//     for(i = 0; i < 5; i++) {
//         printf("numeros digitados: %d", numeros[i]);
//     }

//     return 0;
// }


// #include <stdio.h>

// int main() {
//     int num[2][2];
//     int i,j;

//     for( i = 0; i < 2; i++) {
//         for(j = 0;  j < 2; j++) {
//             printf("Digite um numero: \n");
//             scanf("%d", &num[i][j]);
//             }
//         }
//         printf("Numeros digitados:\n");

//         for (i = 0; i < 2; i++) {
//             for (j = 0; j < 2; j++) {
//                 printf("%d ", num[i][j]);
//             }
//             printf("\n");
//         }
//     return 0;
// }

#include <stdio.h>

void lerNotas(float notas[], int tamanho) {
    int i;

    for(i = 0; i < tamanho; i++) {
        printf("Digite a nota do aluno %d: ", i + 1);
        scanf("%f", &notas[i]);
    }
}

float media(float notas[], int tamanho) {
    float soma = 0;
    int i;

    for(i = 0; i < tamanho; i++) {
        soma += notas[i];
    }

    return soma / tamanho;
}

int alunosAprovados(float notas[], int tamanho) {
    int aprovados = 0;
    int i;

    for(i = 0; i < tamanho; i++) {
        if(notas[i] >= 7) {
            aprovados++;
        }
    }

    return aprovados;
}

void mostrarNotas(float notas[], int tamanho) {
    int i;

    for(i = 0; i < tamanho; i++) {
        printf("Nota do aluno %d: %.2f\n", i + 1, notas[i]);
    }
}

int main() {
    float notas[5];
    float mediaFinal;
    int aprovados;

    lerNotas(notas, 5);

    mostrarNotas(notas, 5);

    mediaFinal = media(notas, 5);

    aprovados = alunosAprovados(notas, 5);

    printf("\nMedia da turma: %.2f\n", mediaFinal);
    printf("Quantidade de aprovados: %d\n", aprovados);

    return 0;
}