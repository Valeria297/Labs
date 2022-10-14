#include <iostream>
#include <math.h>
#include <algorithm> 
using namespace std;

/*  You can see the sixth lab work here!
	11 variant is used in both levels.
	   */

//int main()
//{
//	//First level
//	cout << "This is the first level task!" << endl;
//
//	cout << "Input a string: " << endl;
//	char a[102];
//	cin.getline(a, 102);
//
//	int len = strlen(a);
//
//	if (len % 3 == 0) {
//		cout << " -> ";
//		for (int i = 0; i < len; i++) {
//			if (a[i] == '3' || a[i] == '6' || a[i] == '9') 
//				continue;
//			cout << a[i];
//		}
//		cout << "\n";
//	}
//	else cout << "The length is "<< len << "\nNon-compliance with the conditions!" << endl;
//	
//	//Second level
//	cout << "\nThis is the second level task!" << endl;
//
//	string arr[100], word;
//
//	int size = 0;
//	while (cin >> word) {
//		if (word == "0") break;
//		arr[size++] = word;
//	}
//	sort(arr, arr + size); 
//
//	for (int i = 0; i < size; i++) cout << arr[i] << endl;
//}