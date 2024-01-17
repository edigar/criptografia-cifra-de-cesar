#ifndef CRIPTOGRAFIA_CIFRA_DE_CESAR_CLI_H
#define CRIPTOGRAFIA_CIFRA_DE_CESAR_CLI_H

    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>
    #include "file/file_validator.h"

    void clear_screen();
    int menu();
    void instructions(char type[15]);
    void getFileName(char *name, char type[15]);
    void getKey(int *key);
    void clear_keyboard_buffer();
    void pause();


#endif //CRIPTOGRAFIA_CIFRA_DE_CESAR_CLI_H
