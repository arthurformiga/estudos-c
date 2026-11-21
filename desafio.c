// #include <stdio.h>

// void mostrarNumeros(int num[]) {

//     int i;

//     for(i = 0; i < 5; i++){
//         printf("Digite o numero %d \n", i + 1);
//         scanf("%d", &num[i]);
//     }

//         for (i = 0; i < 5; i++) {
//         printf("%d ", num[i]);
//     }
//     printf("\n");
    
// }

// int main() {
//     int numeros[5];

//      mostrarNumeros(numeros);

//     return 0;
// }



// #include <stdio.h>

// int somar(int numeros[]) {
//     int i;
//     int resultado = 0;

//     for(i= 0; i < 6; i++) {
//         printf("Digite um numero inteiro\n");
//         scanf("%d", &numeros[i]);
//         resultado += numeros[i];
//     }

//        printf("%d", resultado);

//     return resultado;

// }

// int main() {
// int numeros[6];

// int resposta = somar(numeros);

// return 0;

// }


// #include <stdio.h>

// int encontarMaior(int numeros[]){

//     int i;
//     int maior = numeros[0];

//     for( i = 1 ; i < 5; i++) {
//         if(numeros[i] > maior){
//             maior = numeros[i];
//         }
//     }

//     return maior;

// }

// int main(){
//     int numeros [5] = {44,85,7,22,11};

//     int resultado = encontarMaior(numeros);
//     printf("O maior numero eh: %d", resultado);

//     return 0;
// }


#include <stdio.h>

int mostrarPares(int numeros[]) {

    int i;
    int par = 0;
    int impar = 0;
    printf("Digite numeros pares e impares \n");

    for(i = 0; i < 8; i++) {

        scanf("%d", &numeros[i]);

        if(numeros[i] % 2 == 0 ) {
            par++;
        }else {
            impar++;
        }
     } 

     printf("O total de pares: %d \n" , par);
     printf("O total de impares: %d \n", impar);
}

int main() {
    int numeros [8];

    mostrarPares(numeros);


    return 0;
}