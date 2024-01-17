#include "cli.h"

void clear_screen() {
    system("clear || cls");
}

int menu() {
    clear_screen();
    int option;
    printf("\n*****************************************************************************\n*                        CRIPTOGRAFIA CIFRA DE CESAR                        *\n*****************************************************************************\n\n");
    wprintf(L"Escolha:\n\n1. Criptografar\n2. Decriptar\n3. Sair\n\nOpção: ");
    scanf("%d", &option);

    return option;
}

void instructions(char type[15]) {
    if(strcmp(type, "criptografado") == 0) {
        wprintf(L"\nInstruções:\n\n* O Arquivo contendo o texto a ser criptografado deve ser um tipo txt. \n* A chave (criptográfica) é um número de 1 a 999\n\n");
    } else {
        wprintf(L"\nInstruções:\n\n* O Arquivo contendo o texto a ser decriptado deve ser um tipo txt. \n* A chave (criptográfica) deve ser a mesma que foi utilizada para criptografar\n\n");
    }
}

void getFileName(char *name, char type[15]) {
    wprintf(L"Caminho para o arquivo (com a extensão txt) a ser %s: ", type);
    scanf("%s", name);
    int fileStatus = isFileValid(name);
    if(fileStatus != 1) {
        perror("Arquivo inválido");
        exit(EXIT_FAILURE);
    }
}

void getKey(int *key) {
    printf("Chave: ");
    scanf("%d", key);
    if(*key < 1 || *key > 99) {
        wprintf(L"\nChave inválida\n");
        exit(EXIT_FAILURE);
    }
}

void clear_keyboard_buffer() {
    int character = 0;
    while ((character = getchar()) != '\n' && character != EOF) {}
    return;
}

void pause() {
    clear_keyboard_buffer();
    printf("\n\n\nPressione <enter> para continuar...");
    getchar();
}
