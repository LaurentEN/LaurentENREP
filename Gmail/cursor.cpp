#include "cursor.h"
#include "input.h"
#include "file.h"
#include <iostream>

struct cursor {
	int line;
	int charPosition;
};

cursor currentCursor;

void placeCursor(int *input) {

	if(input = LEFT_ARROW) {
		if(currentCursor.charPosition = 0 && currentCursor.line = 0);
		else {
			placeChar(input);
			if(currentCursor.charPosition < 0) {
				currentCursor.line--;
				currentCursor.charPosition = lineSize[currentCursor.line];
			}
			else
				currentCursor.charPosition--;
		}
	}
	
	else if(input =  RIGHT_ARROW) {
		if(currentCursor.charPosition = currentCursor[lineSize] && currentCursor.line[lineNumber]);
		else {
			placeChar(input);
			if(currentCursor.charPosition > lineSize[currentCursor.line]) {
				currentCursor.line++;
				currentCursor.charPosition = 0;
			}
			else
				currentCursor.charPosition++;
		}
	}
	
	else if(input = UP_ARROW) {
		if(currentCursor.line = 0);
		else {
			placeChar(input);
			if(lineSize[currentCursor.charPosition] > lineSize[currentCursor.line-1]) {
				currentCursor.line--;
				curentCursor.charPosition = lineSize[currentCursor.line];
			}		
			else
				currentCursor.line--;
		}
	}
	
	else if(input = DOWN_ARROW) {
		if(currentCursor.line = lineNumber);
		else {
			placeChar(input);
			if(lineSize[currentCursor.charPosition] > lineSize[currentCursor.line+1]) {
				currentCursor.line++;
				currentCursor.charPosition = lineSize[currentCursor.line];
			}
			else
				currentCursor.line++;
		}
	}
	
	else if(input = DELETE_KEY) {
		if(currentCursor.charPosition = lineSize[currentCursor.line] && currentCursor.line = lineNumber);
		if(currentCursor.charPosition = lineSize[currentCursor.line]) {
			placeChar(input);
			removeLine();
			updateLine();
		}
	}
	
	else if(input[0] <= 32 || input[0] >= 126) {
		placeChar(input);
		lineSize[currentCursor.line]++;
	}
}
