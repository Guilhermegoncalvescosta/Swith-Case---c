#include <stdio.h>

// Função para determinar o nome do mês com base no número inserido
void determinar_mes(int numero) {
    switch(numero) {
        case 1:
            printf("Janeiro\n");
            break;
        case 2:
            printf("Fevereiro\n");
            break;
        case 3:
            printf("Março\n");
            break;
        case 4:
            printf("Abril\n");
            break;
        case 5:
            printf("Maio\n");
            break;
        case 6:
            printf("Junho\n");
            break;
        case 7:
            printf("Julho\n");
            break;
        case 8:
            printf("Agosto\n");
            break;
        case 9:
            printf("Setembro\n");
            break;
        case 10:
            printf("Outubro\n");
            break;
        case 11:
            printf("Novembro\n");
            break;
        case 12:
            printf("Dezembro\n");
            break;
        default:
            printf("Não existe mês correspondente ao número digitado.\n");
    }
}

// Função principal
int main() {
    int numero_mes;

    // Solicita ao usuário que insira um número de mês
    printf("Digite um número de mês (1 a 12): ");
    scanf("%d", &numero_mes);
    
    // Verifica se o número de mês está dentro do intervalo válido e chama a função para determinar o mês correspondente
    if (numero_mes >= 1 && numero_mes <= 12) {
        determinar_mes(numero_mes);
    } else {
        printf("Por favor, insira um número de mês válido (1 a 12).\n");
    }

    return 0;
}

