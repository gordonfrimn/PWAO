#include <stdio.h>
#include <stdlib.h>
#include "InputLib.h"

char* InputString(int *length) {
	*length = 0;
	int count = 1;
	char *tempString = malloc(count * sizeof(char*));
	char tempChar = getchar();
	while(tempChar != '\n') {
		tempString[(*length)++] = tempChar;
		if (*length >= count) {
			count *= 2;
			tempString = realloc(tempString, count * sizeof(char*));
		}
		tempChar = getchar();
	}
	tempString[(*length)] = '\0';
	return tempString;
}
