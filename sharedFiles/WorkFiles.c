#include "WorkFiles.h"
#include <stdlib.h>
#include <stdio.h>

char* ReadTextFile(char *path, int *length) {
	FILE *stream = fopen(path, "rb");
	if (stream == NULL)
		exit(1);  // Ошибка файла
	fseek(stream, 0, SEEK_END);
	*length = ftell(stream);
	rewind(stream);
	char *allText = malloc(*length * sizeof(char*));
	if (allText == NULL)
		exit(2);  // Ошибка памяти
	int result = fread(allText, 1, *length, stream);
	if (result != *length)
		exit(3);  // Ошибка чтения файла
	fclose(stream);
	return allText;
}