#include <stdio.h>
#include<stdlib.h>
#include<math.h>
int find(int director, int j);
int main() {
	int a, b, c, d, e;
	scanf_s("%d %d %d %d %d", &a, &b, &c, &d, &e);
	int temp;
	temp = find(a, b);
	temp = find(temp, c);
	temp = find(temp, d);
	temp = find(temp, e);
	printf_s("%d", temp);
	return 0;
}
int find(int director, int j) {
	int a = director >= j ? director : j;
	while (true) {
		if ((a % director == 0) && (a % j == 0)) {
			return a;
		}
		a++;
	}
}
