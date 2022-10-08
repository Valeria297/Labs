#include <iostream>
#include <math.h>
#include<time.h>
using namespace std;
const int X = 10;

/*  You can see the fourth lab work here!
	11 variant is used in both levels.
	   */

void printArray(int array[]) {
	char ending_charapter[] = ", ";
	putchar('[');
	for (size_t i = 0; i < X; ++i) {
		printf("%d", array[i]);
		if (i < X - 1) {
			printf("%s", ending_charapter);
		}
	}
	puts("]");
}

int random(int min, int max) {
	if (min > max) return max;
	return min + (std::rand() % (max - min + 1));
}

int main()
{
	//First level
	cout << "This is the first level task!" << endl;
	
	int a[X]; int sum = 0; int n = 0;
	cout << "Input the values of number array[10]: " << endl;
	for (int i = 0; i < X; i++) std::cin >> a[i];

	//searching for the min element
	int min = a[0];
	for (int r = 1; r < X; r++) {
		if (min > a[r]) {
			min = a[r];
			n = r;
		}
	}

	if (n == X - 1) cout << "\nMin element is the last element of the array!" << endl;
	for (int i = n + 1; i < X; i++) sum += a[i];
	
    cout << "The sum of the elements after min element is: " << sum << endl;

	//Second level
	cout << "\nThis is the second level task!" << endl;

	int value, firstZ, lastZ, count; 
	firstZ = 0; lastZ = 0; count = 0; sum = 0;

	cout << "Are you wanna input your values or use random? \nYour values - 1, Random - 0." << endl;
	cin >> value;
	while (cin.fail() || value < 0 || value > 1) {
		cin.clear();
		cin.ignore(999, '\n');
		cout << "Input the correct data please: " << endl;
		cin >> value;
	}

	if (value == 1) {
		cout << "Input the values of number array[10]: " << endl;
		for (int i = 0; i < X; i++)
			cin >> a[i];
	}
	else if (value == 0) {
		std::srand(std::time(0));
		for (int i = 0; i < X; i++) a[i] = random(0, 10);
	    printArray(a);
	}
	
	//searching for the last zero element
	for (int i = 0; i < X; i++) {
		if (a[i] == 0) {
			count++;
			if (count == 1) firstZ = i;
			lastZ = i;
		}
	}

	if (cin.fail()) std::cout << "You wrote unwanted data, try again later please.";

	//searching for the max element
	int max = a[0];
	for (int r = 1; r < X; r++) {
		if (max <= a[r]) {
			max = a[r];
			n = r;
		}
	}

	if (count == 0) {
		cout << "There are not Zero element! \nThe operation is impossible!" << endl;
	}
	else if (n > lastZ) {
		cout << "The Max element is located after Zero! \nNon-compliance with the conditions!"
			<< endl;
	}
	else if (lastZ == n + 1) {
		cout << "The Max element is near the Zero! \nThe operation is impossible!" << endl;
	}
	else {
		for (int i = n + 1; i < lastZ; i++) sum += a[i];
		cout << "The sum of the element between Max and Zero is: " << sum << endl;
	}
}