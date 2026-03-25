#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include<iostream>
using namespace std;
extern int max_val, min_val, ave_val;



int cal(int* pData, int iLen) {
    if (pData == NULL || iLen <= 0) {
        return 0;
    }
    int max = INT_MIN, min = INT_MAX, sum = 0;
    for (int i = 0; i < iLen; i++) {
        sum += pData[i];
        if (pData[i] > max) {
            max = pData[i];
        }
        if (pData[i] <min) {
            min = pData[i];
        }
    }
     ave_val = sum / iLen;
     max_val = max;
      min_val = min;
    return 1;
}
