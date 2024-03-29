#include <stdlib.h>

void clear_screen() {
    system("clear || cls");
}

void print_header() {
    clear_screen();
    printf("\n*****************************************************************************\n*                        CRIPTOGRAFIA CIFRA DE CESAR                        *\n*****************************************************************************\n\n");
}

void clear_keyboard_buffer() {
    int character = 0;
    while ((character = getchar()) != '\n' && character != EOF) {}
    return;
}

void pause() {
    clear_keyboard_buffer();
    printf("\n\n\nPressione qualquer tecla para continuar...");
    getchar();
}
