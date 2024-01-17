#include "file_validator.h"

int isFileValid(const char *path) {
    struct stat st;

    if (stat(path, &st) < 0)
        return -1;

    return S_ISREG(st.st_mode);
}

void validateOpenFile(FILE *pointerFile) {
    if (pointerFile == NULL) {
        perror("Falha ao abrir arquivo");
        exit(EXIT_FAILURE);
    }
}
