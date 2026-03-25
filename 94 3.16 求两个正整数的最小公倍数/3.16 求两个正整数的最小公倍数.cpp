#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
int main()
{
	int x,y,max;
	scanf("%d %d", &x,&y);
	if (x >= y) {
		max = x;
	}
	else
		max = y;
	for (int i =max; i <= x * y; i++) {
		if (i % x == 0 && i % y == 0) {
			printf("%d", i);
			return 0;
		}
	}
	
	//return 0;
}
