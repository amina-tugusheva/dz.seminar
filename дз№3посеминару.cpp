#include<iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "ru");
	float x, y;
	cin >> x >> y;
	if (((x * x) + (y * y) > 4) && (x > -1) && (x < 1) && (y > -3) && (y < 3))
	{
		cout << "попадает";
	}
	else if (((x * x) + (y * y) < 4) || (x < -1) || (x > 1) || (y < -3) || (y > 3))
	{
		cout << "не попадает";
	}
	else
	{
		cout << "граница";
	}
}