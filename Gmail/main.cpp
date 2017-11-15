#include <iostream>
#include "error.h"
#include "file.h"

#define EXIT_SUCCESS 0
#define EXIT_FAILURE 1

int main(int argc, char **argv) {
   if(!argv[1])
        error(MISSING_ARGUMENT);
    else
        instructionHandler(argv[1]);
}
