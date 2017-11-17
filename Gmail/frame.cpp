#include <iostream>
#include "frame.h"
#include "file.h"
#include "cursor.h"

struct frame {
	int positionBegin;
	int positionEnd;
};

frame currentFrame;

void displayFrame() {
	for(int i = currentFrame.positionBegin; i <= currentFrame.positionEnd; i++)
		std::cout << line[i];
	placeCursorInFrame();
}

void updateFrame() {
	
}

void updateLine() {
	
}
