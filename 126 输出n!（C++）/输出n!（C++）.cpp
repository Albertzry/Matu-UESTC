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
	long long	s=1;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		if (s * i >= INT_MAX) {
			i--;
			cout << i << '!' << '=' << s;
			return 0;
		}
		s *= i;
	}
	cout << n << '!' << '=' << s;
	return 0;
}
