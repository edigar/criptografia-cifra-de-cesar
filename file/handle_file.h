#ifndef CRIPTOGRAFIA_CIFRA_DE_CESAR_HANDLE_FILE_H
#define CRIPTOGRAFIA_CIFRA_DE_CESAR_HANDLE_FILE_H

    #include <stdio.h>
    #include <string.h>
    #include "file_validator.h"

    typedef struct {
        FILE *address;
        char name[100];
    } File;

    void removeExtension(char *name);
    File openTxtFile(char name[100]);
    File createFile(char name[100], char type[15]);

#endif //CRIPTOGRAFIA_CIFRA_DE_CESAR_HANDLE_FILE_H
