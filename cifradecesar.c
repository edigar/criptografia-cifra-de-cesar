#include <stdio.h>
#include <string.h>
#include <locale.h>
#include "screener.h"

void main() {
    FILE *file_enter;
    FILE *file_cript;
    char file_name[100], name[100], type[20];
    char character, charcript;
    int option, key;

    setlocale(LC_ALL, "Portuguese");

    do {
        clear_screen();
        print_header();
        printf("Escolha:\n\n1. Criptografar\n2. Decriptar\n3. Sair\n\nOpção: ");
        scanf("%d", &option);

        if(option == 1 || option == 2) {
            clear_screen();
            print_header();
            if(option == 1) {
                strcpy(type, "criptografado");
                printf("\nInstruções:\n\n* O Arquivo contendo o texto a ser criptografado deve ser um tipo txt. \n* A chave (criptográfica) é um número de 1 a 999\n\n");
            } else if(option== 2) {
                strcpy(type, "decriptado");
                printf("\nInstruções:\n\n* O Arquivo contendo o texto a ser decriptado deve ser um tipo txt. \n* A chave (criptográfica) deve ser a mesma que foi utilizada para criptografar\n\n");
            }

            printf("Nome do arquivo (txt) a ser %s: ", type);
            scanf("%s", name);
            strcpy(file_name, name);
            strcat(file_name, ".txt");

            file_enter = fopen(file_name, "r");
            if(file_enter == NULL) {
                printf("Falha ao abrir arquivo a ser %s (%s)", type, file_name);
            } else {
                strcpy(file_name, name);
                strcat(file_name, "_");
                strcat(file_name, type);
                strcat(file_name, ".txt");
                file_cript = fopen(file_name, "w");
                if(file_cript == NULL) {
                    printf("Falha ao abrir arquivo de destino");
                } else {
                    printf("Chave: ");
                    scanf("%d", &key);
                    key = option == 2 ? key * -1 : key;
                    while((character = fgetc(file_enter)) != EOF) {
                        charcript = character + key;
                        fputc(charcript, file_cript);
                    }

                    printf("\nArquivo %s em %s", type, file_name);

                    fclose(file_enter);
                    fclose(file_cript);
                }
            }
        } else if(option == 3) {
            printf("\n\nSoftware desenvolvido por Edigar Herculano\nTweetme: twitter.com/edigarp\nRepositório: github.com/edigar/criptografia-cifra-de-cesar\n\nTenha um bom dia. :)\nTchau!");
        } else {
            printf("\n\nOpção inválida!");
        }

        pause();

    } while(option != 3);
}
