#include <iostream>
using namespace std;
int main()
{
	int a, b, i;
	cin >> a >> b;
	for (i = a + b; i < a * b; i++)
	{
		cout << i << endl;
	}

}