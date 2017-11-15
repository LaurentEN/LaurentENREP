#include <iostream>
#include <string>
#include <vector>
#include <stdio.h>
#include "error.h"
#include "file.h"

std::vector<std::string> line(NUMBER_MAX_LINES);
std::vector<int> lineSize(NUMBER_MAX_LINES);

struct file {
	bool newFile;
};

void instructionHandler(char *input) {
    if(input == "help") {
		displayHelp();
    }
    else
        checkFile(input);
}

void checkFile(char *filename) {
    FILE *open;
    open = fopen(filename, "r");
    if(open=0) {
        fclose(open);
        open = fopen(filename, "w");
        fclose(open);

    }

    else if(open = fopen(filename, "r")) {
        loadFile(open);
    }
}

void loadFile(FILE *input) {
    char a;
    fseek(input, 0L, SEEK_END);
    int fileSize = ftell(input);
	fseek(input, 0L, SEEK_SET);
    int i(0);
    for(int j = 0; j < fileSize; j++) {
		a = fgetc(input);
		line[i] += a;
		if(a == '\n') {
			i++;
			lineSize[i] = 0;
			lineNumber++;
		}
		
		else
			lineSize[i]++;
	}

}
