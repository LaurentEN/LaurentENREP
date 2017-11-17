#include <iostream>
#include "input.h"
#include "frame.h"
#include "cursor.h"



void placeChar(int *input) {
	if(currentCursor.line < currentFrame.positionBegin)
		updateFrame();
	else if(currentCursor.line > currentCursor.positionEnd)
		updateFrame();
	else
		std::cout << input[0] << input[1] << input[2];
}

void addLine(int lineNumber) {
	
}
