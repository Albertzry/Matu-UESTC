#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include<iostream>
using namespace std;


int main()
{
	char s1[100],s2[100];
	gets_s(s1);
	int i = 0;
	while (s1[i] != '\0') {
		s2[i] = s1[i];
		i++;
	}
	s2[i] = '\\';
	s2[i + 1] = '0';
	s2[i + 2] = '\0';
	puts(s2);
	return 0;
}
