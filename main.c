#include <stdio.h>
#include <stdlib.h>
#include "sharedFiles/InputLib.h"
#include "sharedFiles/StringParser.h"
#include "sharedFiles/WorkFiles.h"
#include "sharedFiles/OutputLib.h"


int main() {
	int length = 0;
	printf("\nEnter string or path to file: ");
	char *string = InputString(&length);
	if (StringPars(string, length) == 1) {
		string = ReadTextFile(string, &length);
	}
	AlphabeticalPrinting(string, length);
	free(string);
	string = NULL;
	getchar();
	return 0;
}