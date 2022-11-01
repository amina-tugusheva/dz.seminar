#include <iostream>
using namespace std;
int f(int a)
{
	setlocale(LC_ALL, "ru");
	if (a != 0)
	{
		a = -a;
		return a;
	}
	else
	{
		return 0;
	}
}
int main()
{
	int x;
	cin >> x;
	cout << f(x);
}