#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include<iostream>
using namespace std;

class Point {
private:
	double a, b;
public:
	Point(double aa, double bb);
	double Distance(const Point& point2);
	double getpoint1();
	double getpoint2();
};
 Point::Point(double aa, double bb) {
	a = aa;
	b = bb;
}
double Point::Distance(const Point &point2) {
	return(sqrt(pow(this->a - point2.a, 2) + pow(this->b - point2.b, 2)));
}


int main() {
	double a, b, c, d;
	cin >> a >> b >> c >> d;
	Point A(a, b), B(c, d);
	cout << A.Distance(B) << endl;
	return 0;
}
