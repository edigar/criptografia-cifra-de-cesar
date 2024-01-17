#include "crypt_file.h"

void encryptFile(FILE *originFile, FILE *destinyFile, int key) {
    char character, charcript;
    while((character = fgetc(originFile)) != EOF) {
        charcript = character + key;
        fputc(charcript, destinyFile);
    }
}

void decryptFile(FILE *originFile, FILE *destinyFile, int key) {
    char character, charcript;
    while((character = fgetc(originFile)) != EOF) {
        charcript = character - key;
        fputc(charcript, destinyFile);
    }
}