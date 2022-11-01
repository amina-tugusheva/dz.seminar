#include <iomanip>
#include <iostream>
using namespace std;
float f1(float s)
{
	float a;
	a = sqrt(sqrt((16 * s * s) / 5.0));
	return a;
}
float f2(float a)
{
	float b;
	b = sqrt(a * a + a * a);
	return b;
}
int main()
{
	float p, S, katet, gipotenuza;
	cin >> S;
	katet = f1(S);
	gipotenuza = f2(katet);
	cout << fixed << setprecision(2) << 2 * katet + gipotenuza;
}