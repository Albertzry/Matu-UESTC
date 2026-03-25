#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include<iostream>
using namespace std;


int main()
{
	char c[51];
	cin.getline(c, 50);
	for (int i =( strlen(c) - 1); i >= 0; i--) {
		cout << c[i];
	}
	return 0;
}
