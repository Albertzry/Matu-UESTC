#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include<iostream>
using namespace std;

int main()
{
    char c[10];
    cin.getline(c, 9);
    if (strlen(c) != 5) {
        cout << "error";
        return 0;
    }
    if (c[0] == c[4] && c[1] == c[3]) {
        cout << "Yes";
    }
    else
        cout << "No";
    return 0;
}

