#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include<iostream>
using namespace std;

int main()
{
	unsigned long long m,r=1;
	cin >> m;
	int n = -1;
	while (r <= m) {
		r *= 2;
		n += 1;
	}
	cout << n;
	return 0;
}
