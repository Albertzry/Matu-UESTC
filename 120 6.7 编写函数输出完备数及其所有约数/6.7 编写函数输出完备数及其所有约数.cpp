#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include<iostream>
using namespace std;
void find(int j);

void find(int j) {
	int n = 0;
	for (int i = 2; i <= j; i++) {
		int s = 0;
		int c[100],l=0;
		for (int k = 1; k < i; k++) {
			if (i % k == 0) {
				s += k;
				c[l] = k;
				l++;
			}
		}
		if (s == i) {
			cout << i << '=';
			for (int m = 0; m < l-1; m++) {
				cout << c[m] << '+';
			}
			cout << c[l-1] << endl;
		}
	}
}
