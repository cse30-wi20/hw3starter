#ifndef _GLOBALS_H
#define _GLOBALS_H

#define MAXFONTSIZE 4*4096
#define MAXFONTLINESIZE 32
#define MAXNUMCGRAMS 200
#define MAXWIDTH 150
#define MAXHEIGHT 16
#define FONTDELIM '#'
#define SPACING 2
#define SMILEY ('~' + 1)
#define FIRSTCHAR ' '

extern int readFontBuffer(const char *);
extern void printCGram(const char);
extern int copyCGram(const char, int);
extern void fillDisplayBuffer(char);
extern void printDisplayBuffer();

extern char fontBuffer[MAXFONTSIZE];
extern char* cGramLookup[MAXNUMCGRAMS];
extern int cGramWidth[MAXNUMCGRAMS];
extern char displayBuffer[MAXHEIGHT][MAXWIDTH];

#endif
