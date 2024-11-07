#include<iostream>
using namespace std;
float tiji(float a, float b)
{
	const float c = 3.14;
	float t = a * a * c * b / 3;
	return t;
}
int main()
{
	float a, b;
	cin >> a;
	cin >> b;
	float t = tiji(a, b);
	cout << t;
}

