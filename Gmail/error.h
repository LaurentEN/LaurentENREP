#ifndef ERROR_H_INCLUDED
#define ERROR_H_INCLUDED

#define MISSING_ARGUMENT 0
#define CHECKFILE_ERROR  1
#define LOADFILE_ERROR   2

void error(int errorType);
void displayHelp();

#endif
