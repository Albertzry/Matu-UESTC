#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include<iostream>
using namespace std;
void swap(int* array, int n);

int main()
{
	int n,m;
	cin >> n;
	int* p = (int*)malloc(sizeof(int) * n);
	for (int i = 0; i < n; i++) {
		scanf("%d,", &p[i]);
	}
	cin >> m;
	int l = 0, h = n - 1;
	while (p[(l + h) / 2] != m) {
		if (p[(l + h) / 2] > m) {
			h = (l + h) / 2;
		}
		else
			l = (l + h) / 2+1;
	}
	cout << (l + h) / 2+1;
	return 0;
}

void swap(int* array, int n) {
	int x;
	if (array == NULL || n <= 0) {
		cout << "error";
		return;
	}
	/*array[0] = array[0] ^ array[n - 1];
	array[n-1] = array[0] ^ array[n - 1];
	array[0] = array[0] ^ array[n - 1];*/
	x = array[0];
	array[0] = array[n-1];
	array[n - 1] = x;
	return ;
}
