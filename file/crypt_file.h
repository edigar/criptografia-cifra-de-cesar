#ifndef CRIPTOGRAFIA_CIFRA_DE_CESAR_CRYPT_FILE_H
#define CRIPTOGRAFIA_CIFRA_DE_CESAR_CRYPT_FILE_H

    #include <stdio.h>
    #include <stdlib.h>

    void encryptFile(FILE *originFile, FILE *destinyFile, int key);
    void decryptFile(FILE *originFile, FILE *destinyFile, int key);

#endif //CRIPTOGRAFIA_CIFRA_DE_CESAR_CRYPT_FILE_H
