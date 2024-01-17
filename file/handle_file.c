#include "handle_file.h"

void removeExtension(char *name) {
    name[strlen(name) - 4] = name[strlen(name)];
}

File openTxtFile(char name[100]) {
    File fData;
    strcpy(fData.name, name);

    fData.address = fopen(fData.name, "r");
    validateOpenFile(fData.address);

    return fData;
}

File createFile(char name[100], char type[15]) {
    removeExtension(name);
    File fData;
    strcpy(fData.name, name);
    strcat(fData.name, "_");
    strcat(fData.name, type);
    strcat(fData.name, ".txt");

    fData.address = fopen(fData.name, "w");
    validateOpenFile(fData.address);

    return fData;
}