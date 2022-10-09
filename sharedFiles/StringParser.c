#include "StringParser.h"

int StringPars(char *string, int length) {
	int flagParser = -1;
	int counterFiveChars = -1;
	for (int i = length; i > 0; i--) {
		counterFiveChars++;
		if (string[i] == '.')
			break;
	}
	if (counterFiveChars <= 0 || counterFiveChars > 4)
		flagParser = 0;
	if (counterFiveChars == 4)
		flagParser = 1;
	return flagParser;
}