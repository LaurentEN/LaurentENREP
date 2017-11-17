#ifndef CURSOR_H_INCLUDED
#define CURSOR_H_INCLUDED

int UP_ARROW[3] = {27, 91, 65};
int DOWN_ARROW[3] = {27, 91, 66};
int RIGHT_ARROW[3] = {27, 91, 67};
int LEFT_ARROW[3] = {27, 91, 68};
int DELETE_KEY[4] = {27, 91, 51, 126};

struct cursor;

void placeCursorInStruct(int *input);
void placeCursorInFrame();

#endif
