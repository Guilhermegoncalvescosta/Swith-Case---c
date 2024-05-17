#include <stdio.h>

// Função para indicar o número de dias em um mês
int dias_no_mes(int mes) {
    int dias;

    // Verifica o mês e define o número de dias correspondente
    switch(mes) {
        case 2:
            dias = 28;
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            dias = 30;
            break;
        default:
            dias = 31;
    }

    return dias;
}

// Função principal
int main() {
    int mes;

    // Solicita ao usuário que insira o número do mês
    printf("Digite o número do mês: ");
    scanf("%d", &mes);
    
    // Verifica se o número do mês é válido
    if (mes < 1 || mes > 12) {
        printf("Por favor, insira um número de mês válido (1 a 12).\n");
        return 1;
    }
    
    // Chama a função para indicar o número de dias no mês e imprime o resultado
    int numero_de_dias = dias_no_mes(mes);
    printf("O mês %d tem %d dias.\n", mes, numero_de_dias);

    return 0;
}

