#include "FunctionsLab7.h"

void DataCreating() {
	ofstream _buf("Buffer.txt");
	system("pause");
	cout << "The file was created!" << endl;
	if (!_buf) {
		cout << "The creating file error!" << endl;
	}
	_buf.close();
}

void PrintData() {
	ifstream reading("Buffer.txt");

	if (reading) {
		string name;
		int groupNum, mathMark, physicsMark, infoMark, count; double averageMark;

		reading >> count;
		cout << "The count of the students: " << count;

		for (int i = 0; i < count; i++) {
            cout << "\nStudent #" << i+1 << "\nName : ";
			reading >> name;
			cout << name;

			cout << "\nNumber of group: ";
			reading >> groupNum;
			cout << groupNum;

			cout << "\nThe math mark of student: ";
			reading >> mathMark;
			cout << mathMark;

			cout << "\nThe math physics of student: ";
			reading >> physicsMark;
			cout << physicsMark;

			cout << "\nThe informathics mark of student: ";
			reading >> infoMark;
			cout << infoMark;

			cout << "\nThe average mark of student: ";
			reading >> averageMark;
			cout << averageMark << endl;
			cout << "___________________________________" << endl;
		}
    }
	else {
		cout << "The printing data error!" << endl;
	}

	reading.close();
} 

void AddDataInNewFile() {
	ofstream record("Buffer.txt", ios::app);

	if (record) {
		string name;
		int groupNum, mathMark, physicsMark, infoMark, count; double averageMark;

		cout << "Input the count of the students: ";
		cin >> count;
		while (cin.fail()) {
			cin.clear();
			cin.ignore(999, '\n');
			cout << "Please input the correct data";
			cin >> count;
		}
		record << count << endl; 

		for (int i = 0; i < count; i++) {
		    cout << "\nInput the data about a student please!\n Name: ";
			cin >> name;

			cout << "\nNumber of group: ";
			cin >> groupNum;

			cout << "\nThe math mark of student: ";
			cin >> mathMark;

			cout << "\nThe math physics of student: ";
		    cin >> physicsMark;

			cout << "\nThe informathics mark of student: ";
			cin >> infoMark;

			averageMark = (static_cast<double>(mathMark) + physicsMark + infoMark) / 3;

			record << name << endl;
			record << groupNum << endl;
			record << mathMark << endl;
			record << physicsMark << endl;
			record << infoMark << endl;

			if (i < count - 1) {
				record << averageMark << endl;
			}
			else {
				record << averageMark;
			}
		}
	}
	else {
		cout << "The writing data error!" << endl;
	}

	record.close();
}

void SolveTheTask() {
	ifstream reading("Buffer.txt");

	int num; int students = 0;
	cout << "Input the number of group that you interested in: ";
	cin >> num;

	if (reading) {
		string name;
		int groupNum, mathMark, physicsMark, infoMark, count; double averageMark;

		reading >> count;
		cout << "The names of the students with 9 or 10 informathics mark is: " << endl;

		for (int i = 0; i < count; i++) {
			reading >> name;
			reading >> groupNum;
			reading >> mathMark;
			reading >> physicsMark;
			reading >> infoMark;
			reading >> averageMark;

			if (infoMark == 9 || infoMark == 10 && num == groupNum) {
				students++;
				cout << name << endl;
			} 
		}
		if (students == 0) {
			cout << "There are not such students!" << endl;
		}
	}
	else {
		cout << "The error of solving task!" << endl;
	}

	reading.close();
}

void Edit() {
	Copy();

	ifstream reading("Buffer_.txt");
	ofstream record("Buffer.txt", ios::out);

	if (reading) {
		if (record) {
			string name;
			int groupNum, mathMark, physicsMark, infoMark, count, _count; double averageMark;

			reading >> count;

			cout << "Choose the number of item to edit from 1 to " << count << endl;
			cin >> _count;
			_count--;

			system("cls");
			record << count << endl;

			if (_count >= 0 && _count < count) {
				for (int i = 0; i < count; i++) {
					if (i != _count) {
						reading >> name;
						record << name << endl;

						reading >> groupNum;
						record << groupNum << endl;

						reading >> mathMark;
						record << mathMark << endl;

						reading >> physicsMark;
						record << physicsMark << endl;

						reading >> infoMark;
						record << infoMark << endl;

						reading >> averageMark;

						if (i < count - 1) {
							record << averageMark << endl;
						}
						else {
							record << averageMark;
						}
					}
					else {
						cout << "\nInput the data about a student please!\n Name: ";
						cin >> name;

						cout << "\nNumber of group: ";
						cin >> groupNum;

						cout << "\nThe math mark of student: ";
						cin >> mathMark;

						cout << "\nThe math physics of student: ";
						cin >> physicsMark;

						cout << "\nThe informathics mark of student: ";
						cin >> infoMark;

						averageMark = (static_cast<double>(mathMark) + physicsMark + infoMark) / 3;

						record << name << endl;
						record << groupNum << endl;
						record << mathMark << endl;
						record << physicsMark << endl;
						record << infoMark << endl;

						if (i < count - 1) {
							record << averageMark << endl;
						}
						else {
							record << averageMark;
						}

						reading >> name;
						reading >> groupNum;
						reading >> mathMark;
						reading >> physicsMark;
						reading >> infoMark;
						reading >> averageMark;
					}
				}
			}
			else {
				cout << "There are not such item!";
			}
		}
		else {
			cout << "Unable to open the file!";
		}
	}
	else {
		cout << "Unable to open the file!";
	}

	record.close();
	reading.close();
	remove("Buffer_.txt");
}

void DeleteData() {
	Copy();

	ifstream reading("Buffer_.txt");
	ofstream record("Buffer.txt", ios::out);

	if (reading) {
		if (record) {
			string name;
			int groupNum, mathMark, physicsMark, infoMark, count, _count; double averageMark;

			reading >> count;
			int newCount = count - 1;

			cout << "Choose the number of item to delete from 1 to " << count << endl;
			cin >> _count;
			_count--;

			system("cls");
			record << newCount << endl;

			if (_count >= 0 && _count < count) {
				for (int i = 0; i < count; i++) {
					if (i != _count) {
						reading >> name;
						record << name << endl;

						reading >> groupNum;
						record << groupNum << endl;

						reading >> mathMark;
						record << mathMark << endl;

						reading >> physicsMark;
						record << physicsMark << endl;

						reading >> infoMark;
						record << infoMark << endl;

						reading >> averageMark;

						if (i < count - 1) {
							record << averageMark << endl;
						}
						else {
							record << averageMark;
						}
					}
					else {
						reading >> name;
						reading >> groupNum;
						reading >> mathMark;
						reading >> physicsMark;
						reading >> infoMark;
						reading >> averageMark;
					}
				}
				cout << "The item was deleted!" << endl;
			}
			else {
				cout << "There are not such item!";
			}
		}
		else {
			cout << "Unable to open the file!";
		}
	}
	else {
		cout << "Unable to open the file!";
	}

	record.close();
	reading.close();
	remove("Buffer_.txt");
}

void Copy() {
	ifstream reading("Buffer.txt");
	ofstream record("Buffer_.txt", ios::out);

	if (reading) {
		if (record) {
			string name;
			int groupNum, mathMark, physicsMark, infoMark, count; double averageMark;

			reading >> count;
			record << count << endl;

			for (int i = 0; i < count; i++) {
				reading >> name;
				record << name << endl;

				reading >> groupNum;
				record << groupNum << endl;

				reading >> mathMark;
				record << mathMark << endl;

				reading >> physicsMark;
				record << physicsMark << endl;

				reading >> infoMark;
				record << infoMark << endl;

				reading >> averageMark;
				record << averageMark << endl;

				if (i < count - 1) {
					record << averageMark << endl;
				}
				else {
					record << averageMark;
				}
			}
		}
		else {
			cout << "Unable to open the file!";
		}
	}
	else {
		cout << "Unable to open the file!";
	}

	record.close();
	reading.close();
}

bool DataCleaning() {
	bool clear = false;

	fstream _buf("Buffer.txt", ios::out);
	if (_buf)
		cout << "Unable to open the file!";

	_buf.clear();
	if (_buf.peek() == EOF) {
		clear = true;
	}

	_buf.close();
	return clear;
}

void Menu() {
	cout << "\nPlease, choose the menu item:\n"
		<< "1. Create file\n"
		<< "2. Add data in the file\n"
		<< "3. Show data\n"
		<< "4. Edit data\n"
		<< "5. Delete data\n"
		<< "6. Solve an individual task\n"
		<< "7. Exit\n";
}