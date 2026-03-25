#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>



int main()
{
    double n;
    scanf("%lf", &n);
    if (pow(n, 4) < 100000) {
        printf("%.6lf\n", pow(n, 2));
        printf("%.6lf\n", pow(n, 3));
        printf("%.6lf\n", pow(n, 4));
    }
    
    return 0;
}
