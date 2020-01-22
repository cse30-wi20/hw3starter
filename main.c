#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include "globals.h"


/* Prints the help message */
void printHelp() {
	printf("Usage:\n./printify -h\n./printify fontFile\n./printify -f fillSymbol fontFile\n");
}


/* Executes the code, accepting a font file, populating the fontBuffer array
 * with the corresponding cGrams, and then printing the given string using the
 * cGrams. A -h flag should print the help message. A -f flag followed by a char
 * should replace the background symbol of the displayBuffer accordingly. */
int main(int argc, char **argv) {
	
	// TODO:
	//   - handle options using getopt
	//   - how can you read in the cGrams from the font file?
	//   - how should displayBuffer be initialized?
	//   - how can you write the input into the displayBuffer using cGrams?
	//   - what are the spacing rules between words and between cGrams within a word?
	//   - how can you print the displayBuffer?
	//   - return 0

	return 0;
}
