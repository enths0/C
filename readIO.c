#include <stdio.h>
#include <dirent.h>
#include <string.h>

void readFileContent(const char *filename) {
    FILE *file = fopen(filename, "r");
    if (!file) {
        printf("Error opening file.\n");
        return;
    }

    char ch;
    while ((ch = fgetc(file)) != EOF) {
        putchar(ch);
    }
    fclose(file);
}

void readWorkingDirectory(const char *directoryNames[], int directoriesCount) {
    DIR *dir;
    struct dirent *entry;
    for (int i = 0; i < directoriesCount; i++) {
        dir = opendir(directoryNames[i]);
        if (dir == NULL) {
            continue; 
        }
        while ((entry = readdir(dir)) != NULL) {
            if (strcmp(entry->d_name, ".") == 0 || strcmp(entry->d_name, "..") == 0) {
                continue;
            }
            printf("\ndirs found: %s", entry->d_name);
        }
        closedir(dir);
        
        printf("\n");
    }
}