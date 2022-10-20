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
		cout << "влево";
		break;
	case 2:
		cout << "вверх";
		break;
	case 3:
		cout << "вправо";
		break;
	case 4:
		cout << "вниз";
		break;
	default:
		cout << "no";


	}
}