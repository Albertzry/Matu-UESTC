#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include<iostream>
using namespace std;
struct clock
{
	int hour;
	int minute;
	int second;
};

typedef struct clock CLOCK;
int main() {
	CLOCK c;
	char s;
	cin >> c.hour >> s >> c.minute >> s >> c.second;
	if (c.hour >= 24 || c.minute >= 60 || c.second >= 60) {
		cout << "error";
	}
	else
	{
		char h[3], m[3], s[3];
		if (c.hour / 10 == 0) {
			h[0] = '0';
			h[1] = c.hour+'0';
			h[2] = '\0';
		}
		else {
			h[0] = c.hour / 10 + '0';
			h[1] = c.hour % 10 + '0';
			h[2] = '\0';
		}
		if (c.minute / 10 == 0) {
			m[0] = '0';
			m[1] = c.minute + '0';
			m[2] = '\0';
		}
		else {
			m[0] = c.minute / 10 + '0';
			m[1] = c.minute % 10 + '0';
			m[2] = '\0';
		}
		if (c.second / 10 == 0) {
			s[0] = '0';
			s[1] = c.second + '0';
			s[2] = '\0';
		}
		else {
			s[0] = c.second / 10 + '0';
			s[1] = c.second % 10 + '0';
			s[2] = '\0';
		}
		cout << h << ':' << m << ':' << s;
	}
	
	return 0;
}
