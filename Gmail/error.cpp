#include <iostream>
#include "error.h"

void error(int errorType) {
    switch(errorType) {
        case 0:
            std::cout << "Error, no filename given\n";
        case 1:
			std::cout << "Error at checking file\n";
		case 2:
			std::cout << "Error at loading file\n";
        default :
            std::cout << "Error " << errorType << '\n';
    }
}

void displayHelp() {
    std::cout << "usage : \neditor filename.txt\n";
}
