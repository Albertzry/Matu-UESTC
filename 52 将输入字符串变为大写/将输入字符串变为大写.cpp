#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	char ch[20];
	gets_s(ch);
	int i=0;
	while (ch[i] != '\0') {
		if (ch[i] >= 'a' && ch[i] <= 'z') {
			ch[i] += 'A' - 'a';
		}
		i++;
	}
	
	puts(ch);
	return 0;
}
