#include <stdbool.h>
#include <stdio.h>
#include <wchar.h>
#include "headers/writeIO.h"
#include "headers/readIO.h"


int main(void) {
    int status = writeToFile("output.txt", "Hello, World!");
    if (status == 0) {
        printf("\nFile written successfully.\n");
        readFileContent("output.txt");
    } else {
        printf("Error writing to file.\n");
    }

    const char *directories[] = {"G:\\code\\c\\headers"};
    int dirCount = 1;
    readWorkingDirectory(directories, dirCount);
    return 0;
}