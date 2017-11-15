#include <iostream>
#include "frame.h"
#include "file.h"

struct frame {
	int positionBegin;
	int positionEnd;
};

frame currentFrame;

void displayFrame() {
	for(int i = currentFrame.positionBegin; i <= currentFrame.positionEnd; i++)
		std::cout << line[i];
}

void updateFrame() {
	
}

void updateLine() {
	
}
