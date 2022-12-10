#include <iostream>
#include <math.h>
#include "FunctionsLab8.h"
using namespace std;

//void main() {
//	rez1(func1);
//	rez2(func2);
//}
//
//int rez1(func lev1) {
//	cout << "This is the first level task!" << endl;
//
//	double a, b, h, y;
//	cout << "Input a, b and h values please: " << endl;
//	std::cin >> a >> b >> h;
//
//	double n, min, max;
//	n = 0; min = 99999; max = -99999;
//
//	for (double i = a; i < b; i += h) {
//		y = lev1(i);
//		n++;
//		y > max ? max = y : max = max;
//		y < min ? min = y : min = min;
//
//		cout << n << ". x = " << i << ", y = " << y << endl;
//	}
//	cout << "Min = " << min << ", Max = " << max << "." << endl;
//	return 0;
//}
//
//int func1(int x) {
//	int y = x / 2 * cos(x) - sin(x);
//	return y;
//}
//
//int rez2(func lev2) {
//	cout << "\nThis is the second level task!" << endl;
//
//	int n; double y, a, b, h, r, s; n = 0;
//	cout << "Input a, b, h values please: " << endl;
//	cin >> a >> b >> h;
//	cout << "Input n value please: " << endl;
//	cin >> n;
//
//	while (cin.fail()) {
//		cin.clear();
//		cin.ignore(999, '\n');
//		cout << "Input correct a, b, h values please: " << endl;
//		cin >> a >> b >> h;
//		cout << "Input correct n value please: " << endl;
//		cin >> n;
//	}
//
//	for (double i = a; i < b; i += h) {
//		y = func2(i);
//		s = i;
//		for (int k = 1; k <= n; k++) {
//			r = (pow(k, 2) + 1) / factorial(k) * pow(i / 2, k);
//			s += r;
//		}
//		cout << "Y = " << y << "; S = " << s << "; |Y - S| = " << fabs(y - s) << endl;
//	}
//
//	return 0;
//}
//
//int func2(int x) {
//	int	y = (pow(x, 2) / 4 + x / 2 + 1) * exp(x / 2);
//	return y;
//}
//
//int factorial(int i) {
//	if (i == 0) return 1;
//	else return i * factorial(i - 1);
//}