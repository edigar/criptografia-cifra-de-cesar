#include <stdio.h>
#include <string.h>
#include <locale.h>
#include "presenter/cli.h"
#include "file/handle_file.h"
#include "file/crypt_file.h"

void main() {
    File enterFile;
    File cryptFile;
    char name[100], type[15];
    int option, key;

    setlocale(LC_ALL, "Portuguese");

    do {
        option = menu();

        switch(option) {
            case 1:
                strcpy(type, "criptografado");
                instructions(type);
                getFileName(name, type);
                getKey(&key);

                enterFile = openTxtFile(name);
                cryptFile = createFile(name, type);
                encryptFile(enterFile.address, cryptFile.address, key);

                printf("\nArquivo %s em %s", type, cryptFile.name);

                fclose(enterFile.address);
                fclose(cryptFile.address);
                break;
            case 2:
                strcpy(type, "decriptado");
                instructions(type);
                getFileName(name, type);
                getKey(&key);

                enterFile = openTxtFile(name);
                cryptFile = createFile(name, type);
                decryptFile(enterFile.address, cryptFile.address, key);

                printf("\nArquivo %s em %s", type, cryptFile.name);

                fclose(enterFile.address);
                fclose(cryptFile.address);
                break;
            case 3:
                wprintf(L"\n\nSoftware desenvolvido por Edigar Herculano\nTweetme: twitter.com/edigarp\nRepositório: github.com/edigar/criptografia-cifra-de-cesar\n\nTenha um bom dia. :)\nTchau!");
                break;
            default:
                wprintf(L"\n\nOpção inválida!");
        }

        pause();

    } while(option != 3);

    exit(EXIT_SUCCESS);
}
