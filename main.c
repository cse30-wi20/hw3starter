#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include "globals.h"


/* Prints the help message */
void printHelp() {
	printf("Usage:\n./banner -h\n./banner fontFile\n./banner -f fillSymbol fontFile\n");
}


/* Executes the code, accepting a font file, populating the fontBuffer array
 * with the corresponding cGrams, and then printing the given string using the
 * cGrams. A -h flag should print the help message. A -f flag followed by a char
 * should replace the background symbol of the displayBuffer accordingly. */
int main(int argc, char **argv) {
	
	// TODO:
	//   - handle options using getopt
	//   - fill the displayBuffer with the appropriate symbol
	//   - read the given font file into the fontBuffer
	//   - for each word:
	//       - for each char in the word:
	//            copy the cGram of the char into the displayBuffer
	//       - ensure there is a ' ' space cGram *between* words
	//   - print the displayBuffer to stdout
	//   - return 0

	return 0;
}
