#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
int CalString(char* str);

int CalString(char* str) {
	int n = 0;
	for (int i = 0; i < strlen(str); i++) {
		if ((*(str + i) >= 'a' && *(str + i) <= 'z') || (*(str + i) >= 'A' && *(str + i) <= 'Z') || (*(str + i) >= '0' && *(str + i) <= '9')) {
			continue;
		}
		else
		{
			n++;
		}
	}
	return n;
}
