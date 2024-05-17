#include <stdio.h>

// Função para verificar se a letra é uma vogal ou consoante
void verificar_vogal_ou_consoante(char letra) {
    // Verifica se a letra é uma vogal
    if (letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u') {
        printf("A letra digitada '%c' é uma vogal.\n", letra);
    } else {
        printf("A letra digitada '%c' é uma consoante.\n", letra);
    }
}

// Função principal
int main() {
    char letra;

    // Solicita ao usuário que insira uma letra minúscula
    printf("Digite uma letra minúscula: ");
    scanf(" %c", &letra);
    
    // Verifica se a letra é uma letra minúscula
    if (letra < 'a' || letra > 'z') {
        printf("Por favor, insira uma letra minúscula válida.\n");
        return 1;
    }
    
    // Chama a função para verificar se a letra é uma vogal ou consoante e imprime o resultado
    verificar_vogal_ou_consoante(letra);

    return 0;
}

