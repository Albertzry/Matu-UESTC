#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include<iostream>
using namespace std;

int main() {
		int a, b, c,r;
		cin >> a >> b >> c;
		if (a > b) {
			r = a;
		}
		else {
			r = b;
		}
		if (r > c) {
			r = r;
		}
		else {
			r = c;
		}
		cout << r;
	return 0;
}
