#include <stdio.h>

// Função para verificar se o número é par ou ímpar
void verificar_par_ou_impar(int numero) {
    if (numero % 2 == 0) {
        printf("O número digitado é par.\n");
    } else {
        printf("O número digitado é ímpar.\n");
    }
}

// Função principal
int main() {
    int numero;

    // Solicita ao usuário que insira um número inteiro positivo
    printf("Digite um número inteiro positivo: ");
    scanf("%d", &numero);
    
    // Verifica se o número é positivo
    if (numero <= 0) {
        printf("Por favor, insira um número inteiro positivo.\n");
        return 1;
    }
    
    // Chama a função para verificar se o número é par ou ímpar e imprime o resultado
    verificar_par_ou_impar(numero);

    return 0;
}


