#include <stdio.h>
#include <string.h>
#include "globals.h"

char displayBuffer[MAXHEIGHT][MAXWIDTH];


/* Looks up the specified char's cGram in fontBuffer, then copies the
 * cGram into the displayBuffer starting at column xPos. Returns the
 * column where the next cGram should start. */
int copyCGram(const char c, int xPos) {
	
	// TODO:
	//   - how can you get char c's cGram?
	//   - how can you copy the cGram into the displayBuffer?
	//   - is there anything to be careful about when copying?
	//   - this should return the xPos (column) of the next cGram; 
	//     what are the inter-cGram spacing rules?

	return -1;
}


/* Fills every byte of displayBuffer with the specified char */
void fillDisplayBuffer(const char c) {
	// TODO
}


/* Prints the entire displayBuffer to stdout */
void printDisplayBuffer() {
	// TODO
}


