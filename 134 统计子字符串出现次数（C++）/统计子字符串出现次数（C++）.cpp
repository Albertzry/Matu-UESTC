#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include<iostream>
using namespace std;
int SubStrNum(char* str, char* substr);



int SubStrNum(char* str, char* substr) {
	if (str == NULL || substr == NULL) {
		cout << "error" << endl;
		return 0;
	}
	int n = 0;
	for (int i = 0; i < strlen(str); i++) {
		int t = 1;
		if (str[i] == substr[0]) {
			for (int j = 0; j < strlen(substr); j++) {
				if (str[i + j] != substr[j]) {
					t = 0;
				}
			}
			if (t == 1) {
				n++;
				i += strlen(substr);
				i--;
			}
		}
	}
	cout << "match times=" << n << endl;
	return 0;
}
