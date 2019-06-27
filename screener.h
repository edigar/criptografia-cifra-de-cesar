#include <stdlib.h>

void print_header() {
    printf("\n*****************************************************************************\n*                        CRIPTOGRAFIA CIFRA DE CESAR                        *\n*****************************************************************************\n\n");
}

void clear_keyboard_buffer() {
    int character = 0;
    while ((character = getchar()) != '\n' && character != EOF) {}
    return;
}

void clear_screen() {
    system("clear || cls");
}

void pause() {
    printf("\n\n\nPressione qualquer tecla para continuar...");
    getchar();
}
