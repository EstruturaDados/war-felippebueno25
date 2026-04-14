#include <stdio.h>
#include <string.h>

struct Territorio {
    char nome[50];
    char cor[20];
    int numTropas;
};

int main() {
    struct Territorio territorios[5];
    
    // cadastrar territorios
    for (int i = 0; i < 5; i++) {
        printf("Digite o nome do territorio %d: ", i + 1);
        fgets(territorios[i].nome, 50, stdin);
        territorios[i].nome[strcspn(territorios[i].nome, "\n")] = '\0'; // Remove o caractere de nova linha

        printf("Digite a cor do territorio %d: ", i + 1);
        fgets(territorios[i].cor, 20, stdin);
        territorios[i].cor[strcspn(territorios[i].cor, "\n")] = '\0'; // Remove o caractere de nova linha

        printf("Digite o numero de tropas no territorio %d: ", i + 1);
        scanf("%d", &territorios[i].numTropas);
        getchar(); // Limpa o buffer de entrada
    }

    // listar territorios
    printf("\nTerritorios cadastrados:\n");
    for (int i = 0; i < 5; i++) {
        printf("Territorio %d:\n", i + 1);
        printf("Nome: %s\n", territorios[i].nome);
        printf("Cor: %s\n", territorios[i].cor);
        printf("Numero de tropas: %d\n", territorios[i].numTropas);
        printf("-------------------------\n");
    }
    
    return 0;
}