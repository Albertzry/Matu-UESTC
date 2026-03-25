#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
void  bubbleSort(int data[], int n);

void  bubbleSort(int data[], int n) {
	for (int i = n - 1; i > 0; i--) {
		for (int j = 0; j <= i - 1; j++) {
			if (data[j] > data[j + 1]) {
				int t = data[j];
				data[j] = data[j + 1];
				data[j + 1] = t;
			}
		}
	}
}
