#include<iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "ru");
	int d;
	cin >> d;
	switch (d)
	{
	case 1:
		cout << "горизонтальный";
		break;
	case 2:
		cout << "вертикальный";
		break;
	case 3:
		cout << "горизонтальный";
		break;
	case 4:
		cout << "вертикальный";
		break;
	default:
		cout << "no";


	}
}