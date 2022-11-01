#include <iostream>
using namespace std;
int f(int a, int b)
{
	a = a + b;
	return a;
}
int main()
{
	int a, b;
	cin >> a >> b;
	cout << f(a, b);
}
