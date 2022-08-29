#include <stdio.h>
#include <string>
#include <iostream>
#include <dirent.h>

int checkFile(const char *filename);
int checkFolder(const char *foldername);
int checkShell();

int checkFile(const char* filename){
    FILE *file;

    if (file = fopen(filename, "r")) {
        fclose(file);
        return true;
    } else return false;

}

int checkFolder(const char* foldername){
    DIR * dir;
    if (dir = opendir(foldername)) {
        closedir(dir);
        return true;
    } else return false;
}

int checkShell(){
    auto ret = system(nullptr);

    if (ret != 0)
        return true;
    else
        return false;
}
