#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include<iostream>
using namespace std;

int main()
{
	int  n;
	cin >> n;
	if (n < 1 || n>10) {
		cout << "error";
		return 0;
	}
	int  i = 1, r = 1,z=1;
	while (i <  n) {
		i++;
		z *= i;
		r += z;
	}
	cout << r<<endl;
	return 0;
}
