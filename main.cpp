#include <iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "rus");

	int i = 0, one = 0, two = 1, res = 0;

	cout << "������� ����� ����� ��������� �� ������ ��������:";
	cin >> i;
	cout << endl;
	


	for (int it = 1; it != i; it++)
	{
			cout << one<<" ";
			two = one + two;
			one = two - one;
			
	}
	
}