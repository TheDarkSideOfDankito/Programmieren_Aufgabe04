//
// Created by ganymed on 06/04/16.
//

#include <stdio.h>
#include "file.h"


bool writeToFile(char* filename, char* content) {
    FILE* file = fopen(filename, "w");

    if(file != NULL) {
        //bool success = fputs(content, file) != EOF;
        int debug = fputs(content, file);
        bool success = debug != EOF;
        return fclose(file) != EOF && success;
    }

    return false;
}
