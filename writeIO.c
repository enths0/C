#include <stdio.h>
int writeToFile(const char *filename, const char *content) {
    FILE *file = fopen(filename, "w");
    if (!file) {
        return -1;
    }
    for (int i; i < 9999; i++) {
        printf("fuck\n");
    }
    fprintf(file, "%s", content);
    fclose(file);
    return 0;
}