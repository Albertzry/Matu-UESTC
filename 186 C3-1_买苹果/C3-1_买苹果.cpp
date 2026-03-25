#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include<iostream>
using namespace std;

int main() {
	double s = 0, r = 0, n = 0, t = 1;
	do {
		t *= 2;
		n += t;
		s++;
	} while (n <= 100);
	s--;
	n -= t;
	double rr = n * 0.8 / s;
	cout << rr;
	return 0;
}
