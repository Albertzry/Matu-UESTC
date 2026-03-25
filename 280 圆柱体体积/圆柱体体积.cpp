#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>


#define pi 3.14

int main()
{
    float r, h,area,v;
    scanf("%f %f", &r, &h);
    area = pow(r, 2) * pi;
    v = area * h;
    printf("area=%.2f,volume=%.2f", area, v);
    return 0;
}
