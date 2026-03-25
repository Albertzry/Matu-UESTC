#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <cmath>
#include <string.h>
#include <stdlib.h>
#include<iostream>
using namespace std;

int main()
{
	int a, b, c,max;
	char cc;
	cin >> a >> cc >> b >> cc >> c;
	if (a <= 0 || b <= 0 || c <= 0) {
		cout << "error";
		return 0;
	}
	max = a > b ? a : b;
	max = max > c ? max : c;
	if (a + b + c - max > max) {
		cout << "yes";
	}
	else
		cout << "no";
	return 0;
}
