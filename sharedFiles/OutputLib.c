#include <stdio.h>
#include "OutputLib.h"

void AlphabeticalPrinting(char *string, int length) {
	if (string != NULL) {
		int gateway = 0;
		for (int i = 65; i <= 90; i++) {
			for (int j = 0; j < length; j++) {
				if (gateway == 0) {
					if (j == 0) {
						if (string[j] == i || string[j] == i + 32) {
							gateway = 1;
						}
					} else {
						if (string[j] == i || string[j] == i + 32) {
							if (string[j - 1] == '\t' || string[j - 1] == '\n' || string[j - 1] == ' ') {
								gateway = 1;
							}
						}
					}
				}
				if (gateway == 1) {					
					if (string[j] == '\t' || string[j] == '\n' || string[j] == ' ') {
						gateway = 0;
						printf("\n");
						continue;
					}
					if ((string[j] >= 65 && string[j] <= 90) || (string[j] >= 97 && string[j] <= 122))
						printf("%c", string[j]);
				}
				
			}
			if (gateway == 1) {	
				printf("\n");			
				gateway = 0;
			}			
		}
	} else {
		printf("\nError print string!\nThe passed string has a value NULL.");
	}
}

void PrintString(char *string, int length) {
	if (NULL != string) {
		printf("\n");
		for (int i = 0; i < length; i++) {
			printf("%c", string[i]);
		}
	} else {
		printf("\nError print string!\nThe passed string has a value NULL.");
	}
}