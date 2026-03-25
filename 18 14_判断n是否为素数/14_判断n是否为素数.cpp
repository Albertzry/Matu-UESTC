#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include<iostream>
using namespace std;

int main()
{
	long  n;
	int tt = scanf("%ld", &n);
	if (tt == 0||n<=3) {
		cout << "error";
		return 0;
	}
	bool t = 1;
	for (int i = 2; i < sqrt(double(n)); i++) {
		if (n % i == 0) {
			t = 0;
			break;
		}
	}
	if (t == 1)
		cout << "yes";
	else
		cout << "no";
	return 0;
}
