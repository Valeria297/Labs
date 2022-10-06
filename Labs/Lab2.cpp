#include <iostream>
#include <math.h>

/*  You can see the second lab work here!
	11 variant is used in all three levels.
	   */

//void main()
//{
//	//First level
//	std::cout << "This is the first level task!" << std::endl;
//
//	double x, y, z;
//	std::cout << "Input z value: " << std::endl;
//	std::cin >> z;
//
//	if (z > 0) {
//		std::cout << "Z value is greater than zero" << std::endl;
//		x = 1 / (pow(z, 2) + 2 * z);
//	}
//	else if (z <= 0) {
//		std::cout << "Z value is less than or equal to zero" << std::endl;
//		x = 1 - pow(z, 3);
//	}
//
//	y = (2 * (exp((-3) * x)) - 4 * pow(x, 2)) / (log(x) + x);
//	std::cout << "Y value equals to " << y << std::endl;
//
//	//Second level
//	std::cout << "\nThis is the second level task!" << std::endl;
//
//	double a, b;
//	std::cout << "Input a and b values: " << std::endl;
//	std::cin >> a >> b;
//	while (std::cin.fail()) {
//		std::cin.clear();
//		std::cin.ignore(999, '\n');
//		std::cout << "Input correct a and b please: ";
//		std::cin >> a >> b;
//	}
//
//	std::cout << "Input z value: " << std::endl;
//	std::cin >> z;
//	while (std::cin.fail()) {
//		std::cin.clear();
//		std::cin.ignore(999, '\n');
//		std::cout << "Input the correct data please: ";
//		std::cin >> z;
//	}
//
//	int v;
//	std::cout << "Choose the variant of function f(x): \n1 - 2x; \n2 - x*x; \n3 - x/3." << std::endl;
//	std::cin >> v;
//	while (std::cin.fail()) {
//		std::cin.clear();
//		std::cin.ignore(999, '\n');
//		std::cout << "Input correct data please: " << std::endl;
//		std::cin >> v;
//	}
//
//	if (log(x) + 2 * x == 0 || log(x) + pow(x, 2) == 0 || log(x) + x / 3 == 0) {
//		std::cout << "There is division by zero operation!";
//    }
//
//	if (z > 0) {
//		std::cout << "Z value is greater than zero" << std::endl;
//		x = 1 / (pow(z, 2) + 2 * z);
//	}
//	else if (z <= 0) {
//		std::cout << "Z value is less than or equal to zero" << std::endl;
//		x = 1 - pow(z, 3);
//	}
//
//	switch (v)
//	{
//	case 1: 
//		y = (2.5 * a * exp((-3) * x) - 4 * b * pow(x, 2)) / log(x) + 2 * x;
//		std::cout << "Y value equal to " << y << std::endl;
//		break;
//	case 2:
//		y = (2.5 * a * exp((-3) * x) - 4 * b * pow(x, 2)) / log(x) + pow(x, 2);
//		std::cout << "Y value equal to " << y << std::endl;
//		break;
//	case 3:
//		y = (2.5 * a * exp((-3) * x) - 4 * b * pow(x, 2)) / log(x) + x / 3;
//		std::cout << "Y value equal to " << y << std::endl;
//		break;
//	default:
//		std::cout << "You chose unreal variant, try again with a right variant later!" << std::endl;
//		break;
//	}
//
//	//Third level
//	std::cout << "\nThis is the third level task!" << std::endl;
//
//	double a2, x2, y2, f;
//	std::cout << "Input a, x and y value: " << std::endl;
//	std::cin >> a2 >> x2 >> y2;
//	while (std::cin.fail()) {
//		std::cin.clear();
//		std::cin.ignore(999, '\n');
//		std::cout << "Input the correct a, x and y please: ";
//		std::cin >> a2 >> x2 >> y2;
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
//	std::cout << "F value equal to " << f << std::endl;
//}