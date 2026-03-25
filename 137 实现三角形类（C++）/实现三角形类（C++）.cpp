#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include<iostream>
using namespace std;

class Ctriangle {
private:
	double a, b, c;
public:
	Ctriangle(double aa, double bb, double cc) {
		a = aa;
		b = bb;
		c = cc;
	}
	double GetPerimeter() {
		return a + b + c;
	}
	double GetArea() {
		double p = (a + b + c) / 2;
		return(sqrt(p * (p - a) * (p - b) * (p - c)));
	}
	void display() {
		cout << "Ctriangle:a=" << a << ",b=" << b << ",c=" << c << endl;
	}
};


int main() {
	double a, b, c;
	cin >> a >> b >> c;
	Ctriangle T(a, b, c);
	T.display();
	cout << "Perimeter:" << T.GetPerimeter() << endl;
	cout << "Area:" << T.GetArea() << endl;
	return 0;
}
