#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include<iostream>
using namespace std;


int main()
{
    char l;
    cin >> l;
    if (l >= 'a' && l <= 'z') {
        l += 'A' - 'a';
        cout << l;
    }
    
    return 0;
}
