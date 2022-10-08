#include <iostream>
#include <math.h>
#define PI 3.1415926
using namespace std;

/*  You can see the first lab work here!
    11 variant is used in all three levels.
	   */

//void main()
//{
//	//first level
//	cout << "this is the first level task!" << endl;
//
//	double a;
//	cout << "input alpha: ";
//	cin >> a;
//
//	while (a == 0) {
//		cout << "input correct alpha: ";
//		cin >> a;
//	}
//
//	double z1, z2;
//	z1 = (sin(4 * a) / (1 + cos(4 * a))) * (cos(2 * a) / (1 + cos(2 * a)));
//	z2 = 1 / tan((3. / 2. * PI) - a);
//
//	cout << "the results of z1 and z2 is: " << z1 << " and " << z2 << endl;
//
//	//second level
//	cout << "\nthis is the second level task!" << endl;
//
//	double b;
//	cout << "input betta: ";
//	cin >> b;
//
//	while (cin.fail() || b == 0) {
//		cin.clear();
//		cin.ignore(999, '\n');
//		cout << "input correct data please: ";
//	    cin >> b;
//	}
//
//	/* in my variant (11) there are no cases where
//	we could observe a division by zero or a root of a negative number
//	exceptions, so i decided not to write unnecessary code */
//
//	z1 = pow(cos((3. / 8. * PI) - b / 4.), 2) - pow(cos((11. / 8. * PI) + b / 4), 2);
//	z2 = sqrt(2) / 2 * sin(b / 2);
//	cout << "the results of z1 and z2 is: " << z1 << " and " << z2 << endl;
//
//	//third level
//	cout << "\nthis is the third level task!" << endl;
//
//	double x, y, z, b1, resb;
//	x = 6.251;
//	y = 0.827;
//	z = 25.001;
//	b1 = 0.7121;
//
//	// the denominators of the expression must not be zero!
//	double denomin1, denomin2;
//
//	if (x + y < 0) std::cout << "there is a root of a negative number, \nwe can't know the answer!";
//	denomin1 = sqrt(x + y);
//	denomin2 = exp(fabs(x - y) + x / 2);
//
//	if (denomin1 == 0 || denomin2 == 0) std::cout << "there is a division by zero, \nwe can't know the answer!";
//
//	double numerator = 1 + (pow(sin(z), 2) / denomin1);
//	resb = pow(y, pow(fabs(x), 1 / 3)) + pow(cos(y * (fabs(x - y) * numerator )/ denomin2), 3);
//
//	if (resb == b1) {
//		cout << "the expression with b = 0.7121 is right!" << endl;
//	}
//	else {
//		cout << "the value is out of permissible limit! result of expression is: " << resb << endl;
//	}
//}
