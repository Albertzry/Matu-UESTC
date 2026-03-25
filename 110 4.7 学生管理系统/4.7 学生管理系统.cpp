#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
typedef struct student {
	char name[21];
	int sex;
	int date;
	float height;
	int c;
	int w;
}Student;
int main()
{
	int n,ct=0,wt=0,cm=0,wm=0,cx=100,wx=100;
	scanf("%d", &n);
	Student* s = (Student*)malloc(sizeof(Student) * n);
	for (int i = 0; i < n; i++) {
		scanf("%s %d %d %f %d %d", &s[i].name, &s[i].sex, &s[i].date, &s[i].height, &s[i].c, &s[i].w );
		ct += s[i].c;
		wt += s[i].w;
		if (s[i].c >= cm) {
			cm = s[i].c;
		}
		if (s[i].w >= wm) {
			wm = s[i].w;
		}
		if (s[i].c <= cx) {
			cx = s[i].c;
		}
		if (s[i].w <= wx) {
			wx = s[i].w;
		}
	}
	printf("C_average:%d\n", ct/n);
	printf("C_max:%d\n", cm);
	for (int i = 0; i < n; i++) {
		if (s[i].c == cm) {
			printf("%s %d %d %.2f %d %d\n", s[i].name, s[i].sex, s[i].date, s[i].height, s[i].c, s[i].w);
		}
	}
	printf("C_min:%d\n", cx);
	printf("Calculus_average:%d\n", wt/n);
	printf("Calculus_max:%d\n", wm);
	for (int i = 0; i < n; i++) {
		if (s[i].w == wm) {
			printf("%s %d %d %.2f %d %d\n", s[i].name, s[i].sex, s[i].date, s[i].height, s[i].c, s[i].w);
		}
	}
	printf("Calculus_min:%d\n", wx);
	return 0;
}
