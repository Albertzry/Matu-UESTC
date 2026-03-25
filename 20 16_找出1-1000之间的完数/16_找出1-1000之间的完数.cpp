#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include<iostream>
using namespace std;


int main()
{
	for (int i = 1; i <= 1000; i++) {
		int t = 0;
		for (int j = 1; j < i; j++) {
			if (i % j == 0) {
				t += j;
			}
		}
		if (t == i) {
			cout << i << endl;
		}
	}
	return 0;
}
