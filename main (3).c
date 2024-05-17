#include <stdio.h>

// Função para calcular o valor do lanche
float calcular_valor(int codigo, int quantidade) {
    float preco;

    // Verifica o código do produto e define o preço correspondente
    switch(codigo) {
        case 100:
            preco = 1.20;
            break;
        case 101:
            preco = 1.30;
            break;
        case 102:
            preco = 1.50;
            break;
        case 103:
            preco = 1.20;
            break;
        case 104:
            preco = 1.70;
            break;
        case 105:
            preco = 2.20;
            break;
        case 106:
            preco = 1.00;
            break;
        default:
            printf("Código de produto inválido.\n");
            return 0;
    }

    // Calcula o valor total do pedido
    return preco * quantidade;
}

// Função principal
int main() {
    int codigo, quantidade;

    // Solicita ao usuário que insira o código do produto e a quantidade
    printf("Digite o código do produto: ");
    scanf("%d", &codigo);
    printf("Digite a quantidade desejada: ");
    scanf("%d", &quantidade);
    
    // Chama a função para calcular o valor do lanche e imprime o resultado
    float valor_total = calcular_valor(codigo, quantidade);
    if (valor_total > 0) {
        printf("O valor total a ser pago é: R$ %.2f\n", valor_total);
    }

    return 0;
}

