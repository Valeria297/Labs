#include <iostream>
#include <math.h>

/*  You can see the third lab work here!
	11 variant is used in both levels.
	   */

//int factorial(int i) {
//	if (i == 0) return 1;
//	else return i * factorial(i - 1);
//}
//
//void main()
//{
//	//First level
//	std::cout << "This is the first level task!" << std::endl;
//
//	double a, b, h, y;
//	std::cout << "Input a, b and h values please: " << std::endl;
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
//		std::cout << n << ". x = " << i << ", y = " << y << std::endl;
//	}
//	std::cout << "Min = " << min << ", Max = " << max << "." << std::endl;
//
//	//Second level
//	std::cout << "\nThis is the first level task!" << std::endl;
//
//	int n1; double a1, b1, h1, r, s; n1 = 0; 
//	std::cout << "Input a, b, h values please: " << std::endl;
//	std::cin >> a1 >> b1 >> h1;
//	std::cout << "Input n value please: " << std::endl;
//	std::cin >> n1;
//
//	while (std::cin.fail()) {
//		std::cin.clear();
//		std::cin.ignore(999, '\n');
//		std::cout << "Input correct a, b, h values please: " << std::endl;
//		std::cin >> a1 >> b1 >> h1;
//		std::cout << "Input correct n value please: " << std::endl;
//		std::cin >> n1;
//	}
//
//	for (double i = a1; i < b1; i += h1) {
//		y = (pow(i, 2) / 4 + i / 2 + 1) * exp(i / 2);
//		s = i;
//		for (int k = 1; k <= n1; k++) {
//			r = (pow(k, 2) + 1) / factorial(k) * pow(i / 2, k);
//			s += r;
//		}
//		std::cout << "Y = " << y << "; S = " << s << "; |Y - S| = " << fabs(y - s) << std::endl;
//	}
//}


