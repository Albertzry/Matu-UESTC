#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include<iostream>
using namespace std;

int main() {
	int i = 1;
	while (i < 100) {
		cout << i << ',';
		i += 2;
	}
	return 0;
}
