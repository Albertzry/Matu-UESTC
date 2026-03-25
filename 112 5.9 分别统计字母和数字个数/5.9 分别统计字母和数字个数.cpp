#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	char ch[100];
	gets_s(ch);
	int i = 0,n=0,c=0;
	while (ch[i] != '\0') {
		if (ch[i] >= '0' && ch[i] <= '9') {
			n++;
		}
		if ((ch[i] >= 'a' && ch[i] <= 'z') || (ch[i] >= 'A' && ch[i] <= 'Z')) {
			c++;
		}
		i++;
	}
	printf("letters:%d,digits:%d", c, n);
	return 0;
}
