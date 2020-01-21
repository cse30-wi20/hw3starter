#include <stdio.h>
#include <string.h>
#include "globals.h"

char fontBuffer[MAXFONTSIZE];
char* cGramLookup[MAXNUMCGRAMS];
int cGramWidth[MAXNUMCGRAMS];


/* Reads the font file and copies the cGram symbols into the fontBuffer
 * array, recording the starting location and the max width of each cGram
 * in the cGramLookup and cGramWidth arrays. Note that these 2 arrays are
 * indexed with an offset of -FIRSTCHAR (i.e. char 'a' data will be in
 * cGramLookup['a' - FIRSTCHAR], etc.) */
int readFontBuffer(const char *fontFile) {
	FILE *fontFilePtr;
	char *fontLine;
	char *fontBufferPtr = fontBuffer;
	int charIdx = 0;
	int maxWidth = 0;
	int lineWidth;

	// This opens the file and handles file IO errors
	if((fontFilePtr = fopen(fontFile, "r")) == NULL) {
		return -1;
	}

	// We found it easier to handle the very first cGram separately; feel free to change!
	cGramLookup[charIdx] = fontBufferPtr;

	while((fontLine = fgets(fontBufferPtr, MAXFONTLINESIZE, fontFilePtr)) != NULL) {
		
		// TODO:
		//   - here fontLine is one line of the font file, ending in a '\n' char
		//   - fgets copies fontLine to fontBufferPtr, so fontBufferPtr should be
		//     updated by the length of the copied line so the next line will not
		//     overwrite the current one
		//   - for every line, update the current cGram's maxWidth
		//   - when seeing a FONTDELIM char, you should:
		//       - store the *current* char's cGram's maxWidth into cGramWidth
		//       - store the *next* char's cGram's location into cGramLookup
		//       - reset maxWidth for the next char

	}

	// The file is closed after use
	fclose(fontFilePtr);
	return 0;
}


/* Looks up the specified char's cGram and prints it to stdout. */
void printCGram(const char c) {
	// TODO
}
