#include <stdio.h>
#include <string.h>
#include "globals.h"

char displayBuffer[MAXHEIGHT][MAXWIDTH];


/* Looks up the specified char's cGram in fontBuffer, then copies the
 * cGram into the displayBuffer starting at column xPos. Returns the
 * column where the next cGram should start. */
int copyCGram(const char c, int xPos) {
	
	// TODO:
	//   - lookup the start of the specified char's cGram
	//   - iterate over all of the cGram's symbols (when do you stop?)
	//   - copy its symbols into displayBuffer (when do you advance
	//     along the columns and when do you go down the rows?)
	//   - return the column of displayBuffer where *the next* cGram
	//     should start, accounting for the width of the current cGram
	//     and the extra offset given by the global SPACING variable

}


/* Fills every byte of displayBuffer with the specified char */
void fillDisplayBuffer(char c) {
	// TODO
}


/* Prints the entire displayBuffer to stdout */
void printDisplayBuffer() {
	// TODO
}


