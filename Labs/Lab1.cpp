#include <iostream>
#include <math.h>
#define PI 3.1415926

/*  You can see the first lab work here!
    11 variant is used in all three levels.
	   */

//void main()
//{
//	//First level
//	std::cout << "This is the first level task!" << std::endl;
//
//	double a;
//	std::cout << "Input alpha: ";
//	std::cin >> a;
//
//	while (a == 0) {
//		std::cout << "Input correct alpha: ";
//		std::cin >> a;
//	}
//
//	double z1, z2;
//	z1 = (sin(4 * a) / (1 + cos(4 * a))) * (cos(2 * a) / (1 + cos(2 * a)));
//	z2 = 1 / tan((3. / 2. * PI) - a);
//
//	std::cout << "The results of z1 and z2 is: " << z1 << " and " << z2 << std::endl;
//
//	//Second level
//	std::cout << "\nThis is the second level task!" << std::endl;
//
//	double b;
//	std::cout << "Input betta: ";
//	std::cin >> b;
//
//	while (std::cin.fail() || b == 0) {
//		std::cin.clear();
//		std::cin.ignore(999, '\n');
//		std::cout << "Input correct data please: ";
//		std::cin >> b;
//	}
//
//	/* In my variant (11) there are no cases where
//	we could observe a division by zero or a root of a negative number
//	exceptions, so I decided not to write unnecessary code */
//
//	z1 = pow(cos((3. / 8. * PI) - b / 4.), 2) - pow(cos((11. / 8. * PI) + b / 4), 2);
//	z2 = sqrt(2) / 2 * sin(b / 2);
//	std::cout << "The results of z1 and z2 is: " << z1 << " and " << z2 << std::endl;
//
//	//Third level
//	std::cout << "\nThis is the third level task!" << std::endl;
//
//	double x, y, z, b1, resB;
//	x = 6.251;
//	y = 0.827;
//	z = 25.001;
//	b1 = 0.7121;
//
//	// the denominators of the expression must not be zero!
//	double denomin1, denomin2;
//
//	if (x + y < 0) std::cout << "There is a root of a negative number, \nwe can't know the answer!";
//	denomin1 = sqrt(x + y);
//	denomin2 = exp(fabs(x - y) + x / 2);
//
//	if (denomin1 == 0 || denomin2 == 0) std::cout << "There is a division by zero, \nwe can't know the answer!";
//
//	double numerator = 1 + (pow(sin(z), 2) / denomin1);
//	resB = pow(y, pow(fabs(x), 1 / 3)) + pow(cos(y * (fabs(x - y) * numerator )/ denomin2), 3);
//
//	if (resB == b1) {
//		std::cout << "The expression with b = 0.7121 is right!" << std::endl;
//	}
//	else {
//		std::cout << "The value is out of permissible limit! Result of expression is: " << resB << std::endl;
//	}
//}
