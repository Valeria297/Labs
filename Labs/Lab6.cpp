//������ ������ ��������. ���������� ����� ��������� ������ L, � ���� ����� ������ 3, �� ��������� ��� �����, ��������� �� 3

//���� ������, ��������� �� ���� �� ���������� �����, ����������� ���������. ������� �� ����� ����� � ������� ��������.

#include <iostream>
#include <math.h>
using namespace std;

/*  You can see the sixth lab work here!
	11 variant is used in both levels.
	   */

int main()
{
	//First level
	cout << "This is the first level task!" << endl;

	cout << "Input a string: " << endl;
	char a[102];
	cin.getline(a, 102, '\n');

	int len = strlen(a);

	if (len % 3 == 0) {
		for (int i = 0; i < len; i++) {
			if (a[i] == '3' || a[i] == '6' || a[i] == '9') 
				continue;
			cout << a[i];
		}
	}
	else cout << "The length is "<< len << "\nNon-compliance with the conditions!" << endl;
	
	
}