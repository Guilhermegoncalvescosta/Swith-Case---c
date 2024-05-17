#include <stdio.h>

// Função para realizar a operação aritmética com base no caractere inserido
float realizar_operacao(float num1, float num2, char operador) {
    switch(operador) {
        case '+':
            return num1 + num2;
        case '-':
            return num1 - num2;
        case '*':
            return num1 * num2;
        case '/':
            // Verifica se o segundo número é zero para evitar divisão por zero
            if (num2 != 0)
                return num1 / num2;
            else {
                printf("Erro: Divisão por zero!\n");
                return 0;
            }
        default:
            printf("Operador inválido!\n");
            return 0;
    }
}

// Função principal
int main() {
    float num1, num2;
    char operador;

    // Solicita ao usuário que insira os dois números reais
    printf("Digite o primeiro número: ");
    scanf("%f", &num1);
    printf("Digite o segundo número: ");
    scanf("%f", &num2);

    // Solicita ao usuário que insira o operador
    printf("Digite o operador (+, -, * ou /): ");
    scanf(" %c", &operador);
    
    // Chama a função para realizar a operação e imprime o resultado
    float resultado = realizar_operacao(num1, num2, operador);
    printf("Resultado: %.2f\n", resultado);

    return 0;
}


