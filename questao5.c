#include <stdio.h>
#include <string.h>
// DEFINIÇÃO DO NÚMERO MÁXIMO DE CLIENTES
#define NUM_CLIENTES 5

// TYPEDEF PARA CRIAR O REGISTRO DA CARTEIRA

typedef struct {
    char cliente[50];
    float saldo;
    int numero;
    char tipo_conta[10];
    
} Carteira;

Carteira cart[NUM_CLIENTES];

//FUNÇÃO DE CADASTRAR CLIENTES QUE RECEBE O VETOR DE CARTEIRAS E UM PONTEIRO PARA FLAG

void cadastrarCliente(Carteira cart[], int *flag) {
    int op;
    int i;
    int soma = 0;
    //FOR PARA CADASTRAR OS CLIENTES, INICIALIZANDO O NÚMERO DA CARTEIRA E RECEBENDO OS DADOS DO CLIENTE
    for(i = 0; i < NUM_CLIENTES; i++){
        cart[i].numero = i + 1;
        printf("Digite o nome do cliente. \n");
        scanf("%s", cart[i].cliente);

        printf("Digite o saldo do cliente. \n");
        scanf("%f", &cart[i].saldo);
        cart[i].saldo += soma;
        
    }
    
    *flag = 1;
    printf("Selecione o seu tipo de conta \n");
    printf("1 - Corrente\n");
    printf("2 - Poupanca\n");
    printf("3 - Salario\n");
    // FOR PARA RECEBER O TIPO DE CONTA DO CLIENTE E ARMAZENAR NO VETOR DE CARTEIRAS
    for(i = 0; i < NUM_CLIENTES; i++) {
        printf("Digite a opcao desejada: \n");
        scanf("%d", &op);
    // SWITCH PARA VERIFICAR O TIPO DE CONTA E ARMAZENAR NO VETOR DE CARTEIRAS
       switch(op) {
       case 1:
        strcpy(cart[i].tipo_conta, "Corrente"); 
        break;
            case 2:
        strcpy(cart[i].tipo_conta, "Poupanca");
        break;
            case 3:
        strcpy(cart[i].tipo_conta, "Salario");
        break;
            default:
            strcpy(cart[i].tipo_conta, "Invalida");
            printf("Tipo de conta invalido!\n");
    } 
    
    }
    
}
    // FUNÇÃO DE EXIBIR CARTEIRAS QUE RECEBE O VETOR DE CARTEIRAS
void exibirCarteira(Carteira cart[NUM_CLIENTES]) {
    int i;
    float valor_total = 0;
    // FOR PARA EXIBIR OS DADOS DOS CLIENTES CADASTRADOS NO VETOR DE CARTEIRAS
    for (i = 0; i < NUM_CLIENTES; i++) {

        printf("\nCliente: %s\n", cart[i].cliente);
        printf("Numero da carteira: %d\n", cart[i].numero);
        printf("Saldo: R$ %.2f\n", cart[i].saldo);
        printf("Tipo de conta: %s\n", cart[i].tipo_conta);

        valor_total += cart[i].saldo;
    }

    printf("Valor total armazenado nas carteiras: R$ %.2f\n", valor_total);
    printf("Quantidade de clientes: %d\n", NUM_CLIENTES);
}

int main()
{

    //DECLARAÇÃO DO VETOR DE CARTEIRAS E VARIÁVEIS
    Carteira cart[NUM_CLIENTES];

    int flag = 0;
    int opcao;
    int i;
    // FOR PARA INICIALIZAR O NÚMERO DAS CARTEIRAS
    for (i = 0; i < NUM_CLIENTES; i++) {
        cart[i].numero = 1000 + i;
    }
    // MENU DA CARTEIRA
    do {
        printf("1 - Abrir carteira\n");
        printf("2 - Consultar carteira\n");
        printf("3 - Sair\n");

        printf("Digite sua opcao: ");
        scanf("%d", &opcao);
        // SWITCH PARA VERIFICAR A OPÇÃO ESCOLHIDA PELO USUÁRIO
        switch (opcao) {
            case 1:
                cadastrarCliente(cart, &flag);
                break;
            case 2:
                if (flag > 0) {
                    exibirCarteira(cart);
                }
                else {
                    printf("\nNenhuma carteira cadastrada!\n");
                }
                break;
            case 3:
                printf("\nEncerrando o programa...\n");
                break;
            default:
                printf("\nOpcao invalida! Tente novamente.\n");
        }
    } while (opcao != 3);

    return 0;
}