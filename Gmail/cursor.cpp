#include <iostream>
#include "cursor.h"
#include "input.h"
#include "file.h"
#include "checkSums.h"

struct cursor {
	int line;
	int charPosition;
};

cursor currentCursor;

void placeCursorInStruct(int *input) {

	if(checkSums(input, LEFT_ARROW) == 0) {
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
	
	else if(checkSums(input, RIGHT_ARROW) == 0) {
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
	
	else if(checkSums(input, UP_ARROW) == 0) {
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
	
	else if(checkSums(input, DOWN_ARROW) == 0) {
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
	
	else if(checkSums(input, DELETE_KEY) == 0) {
		if(currentCursor.charPosition = lineSize[currentCursor.line] && currentCursor.line = lineNumber);
		if(currentCursor.charPosition = lineSize[currentCursor.line]) {
			placeChar(input);
			removeLine();
			updateLine();
		}
		else
			placeChar(input);
	}
	
	else if(input[0] <= 32 || input[0] >= 126) {
		placeChar(input);
		lineSize[currentCursor.line]++;
	}
}

void placeCursorInFrame() {
	int lineNum = lineNumber;
	int line(lineNumber);
	int charPosition(lineSize[lineNum]);
	while(line != currentCursor.line && charPosition != currentCursor.charPosition) {
		for(int i = 0; i <= 2; i++)
			printf("%c", LEFT_ARROW[i]);
		if(charPosition == 0) {
			line--;
			charPosition = lineSize[lineNum--];
		}
		else if(charPosition > 0)
			charPosition--;
	}
}
