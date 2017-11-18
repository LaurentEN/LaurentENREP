#include <stdio.h>
#include <ncurses.h>
#include "input.h"
#include "cursor.h"

void inputHandler() {
        initscr();
        int *input;
        int i(0);
        while(input[0] != CTRL_X) {
                intput[i] = getch();
                if(input[i] <= 32 && input[i] >= 126) {
                        placeCursorInStruct(input);
                        input[i] = 0;
                }
                else if(input[i] == 27) {
                        while(input[i++] = getch() && i != 2);
                        placeCursorInStruct(input);
                }
                else {
                        while(input[i++] = getch() && i != 3);
                        placeCursorInStruct(input);
                }
        }
        endwin();
}
