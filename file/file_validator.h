#ifndef CRIPTOGRAFIA_CIFRA_DE_CESAR_FILE_VALIDATOR_H
#define CRIPTOGRAFIA_CIFRA_DE_CESAR_FILE_VALIDATOR_H

    #include <stdio.h>
    #include <stdlib.h>
    #include <sys/stat.h>

    int isFileValid(const char *path);
    void validateOpenFile(FILE *pointerFile);

#endif //CRIPTOGRAFIA_CIFRA_DE_CESAR_FILE_VALIDATOR_H
