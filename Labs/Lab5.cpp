#include <iostream>
#include <math.h>
using namespace std;

/*  You can see the fifth lab work here!
	11 variant is used in both levels.
	   */

//int main()
//{
//	//First level
//	cout << "This is the first level task!" << endl;
//
//	int m, n;
//	cout << "Input the count of columns and rows: " << endl;
//	cin >> n >> m;
//	int** arr = new int* [n];
//	for (int i = 0; i < n; ++i)
//		arr[i] = new int[m];
//
//	cout << "Input the values of the array: " << endl;
//	for (int i = 0; i < n; i++) {
//		for (int k = 0; k < m; k++) {
//			cin >> arr[i][k];
//		}
//	}
//
//	int num, sum; 
//	cout << "Input a number: " << endl;
//	cin >> num;
//
//	int stringCount = 0;
//	for (int i = 0; i < n; ++i) {
//		sum = 0;
//		for (int j = 0; j < m; ++j)
//			sum += arr[i][j];
//
//		if (sum / (double)m < num)
//			++stringCount;
//	}
//	cout << "The count of strings is: " << stringCount << endl;
//	
//	//Second level
//	cout << "\nThis is the second level task!" << endl;
//
//	cout << "Input the count of columns and rows: " << endl;
//	cin >> n >> m;
//	int** arr2 = new int* [n];
//	for (int i = 0; i < n; ++i)
//		arr2[i] = new int[m];
//
//	cout << "Input the values of the array: " << endl;
//	for (int i = 0; i < n; i++) {
//		for (int k = 0; k < m; k++) {
//			cin >> arr2[i][k];
//		}
//	}
//
//	int countE = 0;
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < m; j++) {
//			if (j > 0 && j < n) {
//				if (arr2[i][j - 1] < arr2[i][j] && arr2[i][j + 1] > arr2[i][j])
//					countE++;
//			}
//		}
//	}
//
//	cout << "The count of elements is: " << countE << endl;
//}