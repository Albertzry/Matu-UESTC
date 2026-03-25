#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include<iostream>
using namespace std;

void adds(char* a, char* b);

int main()
{
	char a[21], b[50];
	cin.getline(a, 21);
	adds(a, b);
	cout << b << endl;
	
	return 0;
}
void adds(char* a, char* b) {
	int i = 0, j = 0, n = 0;
	while (a[i] != '\0') {
		n++;
		if (n == 3) {
			b[j] = '*';
			j++;
			n = 0;
		}
		else {
			b[j] = a[i];
			j++;
			i++;
		}
	}
	b[j] = '\0';
	return;
}
