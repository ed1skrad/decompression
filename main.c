#include "Initialization.h"
#include <stdio.h>

int main() {
    char filename[255];
    char output[255];
    printf("Enter filename: ");
    scanf("%254s", filename);
    printf("Enter output filename: ");
    scanf("%254s", output);
    Decompress(filename, output);
}
