#include <iostream>
#include <math.h>
using namespace std;

/*  You can see the second lab work here!
	11 variant is used in all three levels.
	   */
//
//void main()
//{
//	//First level
//	cout << "This is the first level task!" << endl;
//
//	double x, y, z;
//	cout << "Input z value: " << endl;
//	cin >> z;
//
//	if (z > 0) {
//		cout << "Z value is greater than zero" << endl;
//		x = 1 / (pow(z, 2) + 2 * z);
//	}
//	else if (z <= 0) {
//		cout << "Z value is less than or equal to zero" << endl;
//		x = 1 - pow(z, 3);
//	}
//
//	y = (2 * (exp((-3) * x)) - 4 * pow(x, 2)) / (log(x) + x);
//	cout << "Y value equals to " << y << endl;
//
//	//Second level
//	cout << "\nThis is the second level task!" << endl;
//
//	double a, b;
//	cout << "Input a and b values: " << endl;
//	cin >> a >> b;
//	while (cin.fail()) {
//		cin.clear();
//		cin.ignore(999, '\n');
//		cout << "Input correct a and b please: ";
//		cin >> a >> b;
//	}
//
//	cout << "Input z value: " << endl;
//	cin >> z;
//	while (cin.fail()) {
//		cin.clear();
//		cin.ignore(999, '\n');
//		cout << "Input the correct data please: ";
//		cin >> z;
//	}
//
//	int v;
//	cout << "Choose the variant of function f(x): \n1 - 2x; \n2 - x*x; \n3 - x/3." << endl;
//	cin >> v;
//	while (cin.fail()) {
//		cin.clear();
//		cin.ignore(999, '\n');
//		cout << "Input correct data please: " << endl;
//		cin >> v;
//	}
//
//	if (log(x) + 2 * x == 0 || log(x) + pow(x, 2) == 0 || log(x) + x / 3 == 0) {
//		cout << "There is division by zero operation!";
//    }
//
//	if (z > 0) {
//		cout << "Z value is greater than zero" << endl;
//		x = 1 / (pow(z, 2) + 2 * z);
//	}
//	else if (z <= 0) {
//		cout << "Z value is less than or equal to zero" << endl;
//		x = 1 - pow(z, 3);
//	}
//
//	switch (v)
//	{
//	case 1: 
//		y = (2.5 * a * exp((-3) * x) - 4 * b * pow(x, 2)) / log(x) + 2 * x;
//		cout << "Y value equal to " << y << endl;
//		break;
//	case 2:
//		y = (2.5 * a * exp((-3) * x) - 4 * b * pow(x, 2)) / log(x) + pow(x, 2);
//		cout << "Y value equal to " << y << endl;
//		break;
//	case 3:
//		y = (2.5 * a * exp((-3) * x) - 4 * b * pow(x, 2)) / log(x) + x / 3;
//		cout << "Y value equal to " << y << endl;
//		break;
//	default:
//		cout << "You chose unreal variant, try again with a right variant later!" << endl;
//		break;
//	}
//
//	//Third level
//	cout << "\nThis is the third level task!" << endl;
//
//	double a2, x2, y2, f;
//	cout << "Input a, x and y value: " << endl;
//	cin >> a2 >> x2 >> y2;
//	while (cin.fail()) {
//		cin.clear();
//		cin.ignore(999, '\n');
//		cout << "Input the correct a, x and y please: ";
//		cin >> a2 >> x2 >> y2;
//	}
//
//	if (a2 < 0) {
//		f = x2 < y2 ? pow(x2, 2) + 2 : pow(y2, 2) + 2;
//	}
//	else if (a2 == 0) {
//		f = x2 > y2 && x2 > a2 ? x2 : y2 > a2 ? y2 : a2;
//	}
//	else if (a2 > 0) {
//		f = fabs(x2 - y2) + y2 * (x2 + sqrt(pow(a2, 3)));
//	}
//
//	cout << "F value equal to " << f << endl;
//}