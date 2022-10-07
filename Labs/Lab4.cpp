#include <iostream>
#include <math.h>
const int X = 10;

/*  You can see the fourth lab work here!
	11 variant is used in both levels.
	   */

void main()
{
	//First level
	std::cout << "This is the first level task!" << std::endl;
	
	int a[X]; int sum = 0; int n = 0;
	std::cout << "Input the values of number array[10]: " << std::endl;
	for (int i = 0; i < X; i++) std::cin >> a[i];

	//searching for the min element
	int min = a[0];
	for (int r = 1; r < X; r++) {
		if (min > a[r]) {
			min = a[r];
			n = r;
		}
	}

	if (n == X - 1) std::cout << "\nMin element is the last element of the array!" << std::endl;
	for (int i = n + 1; i < X; i++) sum += a[i];
	
	std::cout << "The sum of the elements after min element is: " << sum << std::endl;

	//Second level
	std::cout << "\nThis is the second level task!" << std::endl;

	int firstZ, lastZ, count; 
	firstZ = 0; lastZ = 0; count = 0; sum = 0;

	std::cout << "Input the values of number array[10]: " << std::endl;
	for (int i = 0; i < X; i++) {
		std::cin >> a[i];

		//searching for the last zero element
		if (a[i] == 0) {
			count++;
			if (count == 1) firstZ = i;
			lastZ = i;
		}
	}

	if (std::cin.fail()) std::cout << "You wrote unwanted data, try again later please.";

	//searching for the max element
	int max = a[0];
	for (int r = 1; r < X; r++) {
		if (max <= a[r]) {
			max = a[r];
			n = r;
		}
	}

	if (count == 0) {
		std::cout << "There are not Zero element! \nThe operation is impossible!" << std::endl;
	}
	else if (n > lastZ) {
		std::cout << "The Max element is located after Zero! \nNon-compliance with the conditions!"
			<< std::endl;
	}
	else if (lastZ == n + 1) {
		std::cout << "The Max element is near the Zero! \nThe operation is impossible!" << std::endl;
	}
	else {
		for (int i = n + 1; i < lastZ; i++) sum += a[i];
		std::cout << "The sum of the element between Max and Zero is: " << sum << std::endl;
	}
}