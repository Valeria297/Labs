#include <iostream>
#include <math.h>
using namespace std;

/*  You can see the third lab work here!
	11 variant is used in both levels.
	   */
//
//int factorial(int i) {
//	if (i == 0) return 1;
//	else return i * factorial(i - 1);
//}
//
//void main()
//{
//	//First level
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
//		y = i / 2 * cos(i) - sin(i);
//		n++;
//		y > max ? max = y : max = max;
//		y < min ? min = y : min = min;
//		
//		cout << n << ". x = " << i << ", y = " << y << endl;
//	}
//	cout << "Min = " << min << ", Max = " << max << "." << endl;
//
//	//Second level
//	cout << "\nThis is the second level task!" << endl;
//
//	int n1; double a1, b1, h1, r, s; n1 = 0; 
//	cout << "Input a, b, h values please: " << endl;
//	cin >> a1 >> b1 >> h1;
//	cout << "Input n value please: " << endl;
//	cin >> n1;
//
//	while (cin.fail()) {
//		cin.clear();
//		cin.ignore(999, '\n');
//		cout << "Input correct a, b, h values please: " << endl;
//		cin >> a1 >> b1 >> h1;
//		cout << "Input correct n value please: " << endl;
//		cin >> n1;
//	}
//
//	for (double i = a1; i < b1; i += h1) {
//		y = (pow(i, 2) / 4 + i / 2 + 1) * exp(i / 2);
//		s = i;
//		for (int k = 1; k <= n1; k++) {
//			r = (pow(k, 2) + 1) / factorial(k) * pow(i / 2, k);
//			s += r;
//		}
//		cout << "Y = " << y << "; S = " << s << "; |Y - S| = " << fabs(y - s) << endl;
//	}
//}


