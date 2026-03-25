#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include<iostream>
using namespace std;

int cmp(const void* s1, const void* s2) {
    return(*(int*)s1 - *(int*)s2);
}
int main()
{
    int n;
    cin >> n;
    int* p = (int*)malloc(sizeof(int) * n);
    for (int i = 0; i < n; i++) {
        cin >> p[i];
    }
    qsort(p, n, sizeof(int), cmp);
    for (int i = 0; i < n - 1; i++) {
        cout << p[i]<<',';
    }
    cout << p[n - 1];
    free(p);
    return 0;
}

