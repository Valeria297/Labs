#include <iostream>
#include <math.h>
#include "FunctionsLab7.h"
using namespace std;

/*  You can see the seventh lab work here!
	11 variant is used in both levels.
	   */

int main()
{
	////First level
	//cout << "This is the first level task!" << endl;
	//
	//int item = 0;
	//cout << "\nPlease, choose the menu item:\n"
	//	<< "1. Create file\n"
	//	<< "2. Add data in the file\n"
	//	<< "3. Show data\n"
	//	<< "4. Solve an individual task\n"
	//	<< "5. Exit\n";

 //   while (item != 5) {
	//	cout << "Your choice: ";
	//	cin >> item;

	//	switch (item) {
	//	case 1:
	//		DataCreating();
	//		break;
	//	case 2:
	//		AddDataInNewFile();
	//		break;
	//	case 3:
	//		PrintData();
	//		break;
	//	case 4:
	//		SolveTheTask();
	//		break;
	//	case 5: 
	//      cout << "See ya!";
	//      break;
	//	default:
	//		cout << "The uncorrect choice of the menu item!" << endl;
	//	}
	//}
	//DataCleaning();

	//Second level 
	cout << "This is the second level task!" << endl;

	int item = 0;
	Menu();

	while (item != 7) {
		cout << "Your choice: ";
		cin >> item;

		switch (item) {
		case 1:
			DataCreating();
			break;
		case 2:
			AddDataInNewFile();
			break;
		case 3:
			PrintData();
			break;
		case 4:
			Edit();
			Menu();
			break;
		case 5:
			DeleteData();
			Menu();
			break;
		case 6:
			SolveTheTask();
			break;
		case 7: 
			cout << "See ya!";
			break;
		default:
			cout << "The uncorrect choice of the menu item!" << endl;
		}
	}
	DataCleaning();
}



