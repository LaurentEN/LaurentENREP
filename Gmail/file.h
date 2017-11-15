#ifndef FILE_H_INCLUDED
#define FILE_H_INCLUDED

#include <stdio.h>
#include <iostream>
#include <string>
#include <vector>

#define NUMBER_MAX_LINES 1000000

extern std::vector<std::string> line;
extern std::vector<int> lineSize;
int lineNumber(0);

struct file;

void instructionHandler(char *input);
void checkFile(char *filename);
void loadFile(FILE *input);

#endif
