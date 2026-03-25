#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include<iostream>
using namespace std;
//
//
//int main()
//{
//	long long n1, n2;
//	cin >> n1 >> n2;
//	if (n1 == n2) {
//		cout << '0';
//	}
//	else if (n1 > n2) {
//		cout << '+' << n1 - n2;
//	}
//	else {
//		cout << '-';
//		int w1=n1, w2=n2,t1=0,t2=0;
//		while (w1 != 0) {
//			w1 /= 10;
//			t1++;
//		}
//		while (w2 != 0) {
//			w2 /= 10;
//			t2++;
//		}
//		for (int i = 0; i < t2-t1; i++) {
//			cout << '0';
//		}
//		cout << n2 - n1;
//	}
//	return 0;
//}
class Location {
private:
	int X, Y;
public:
	void init(int initX, int initY) {
		X = initX;
		Y = initY;
	}
	int GetX() {
		return X;
	}
	int GetY() {
		return Y;
	}
};
int main() {
	Location A1;
	A1.init(20, 90);
	Location& rA1 = A1;      //定义一个指向A1的引用rA1;
	cout << rA1.GetX() << rA1.GetY();//用rA1在屏幕上依次输出对象A1的数据成员X和Y的值;
		return 0;
}
