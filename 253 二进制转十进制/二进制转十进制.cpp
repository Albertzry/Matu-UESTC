#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include<iostream>
using namespace std;

int main()
{
    char s[100];
    int r = 0;
    cin.getline(s, 99);
    for (int i = 0; i < strlen(s); i++) {
        r = r * 2 + s[i]-'0';
    }
    cout << r;

    return 0;
}

