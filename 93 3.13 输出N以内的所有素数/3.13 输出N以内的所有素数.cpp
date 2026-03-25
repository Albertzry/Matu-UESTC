#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include<iostream>
using namespace std;

int main()
{
	int n;
	int t = scanf("%d", &n);
	if (t == 0||n>=200||n<=1) {
		cout << "error";
		return 0;
	}
	for (int i = 2; i <= n; i++) {
		bool t = 1;
		for (int j = 2; j < i; j++) {
			if (i % j == 0) {
				t = 0;
				break;
			}
		}
		if (t == 1) {
			cout << i << ",";
		}
	}
	return 0;
}
