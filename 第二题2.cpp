#include<iostream>
using namespace std;
void resolve(double x)
{
	if (0 < x&&x < 1)
	{
		double y = 0;
		y = 3 - 2 * x;
		cout << 'y' << "=" << y << endl;
	}
	else if (1 <= x&&x < 5)
	{
		double y = 0;
		y = 1 / (2 * x) + 1;
		cout << 'y' << "=" << y << endl;
	}
	else if (5 <= x&&x < 10)
	{
		double y = 0;
		y = x * x;
		cout << 'y' << "=" << y << endl;
	}
	else
	{
		cout << "���ڶ�������" << endl;
	}
}
int main()
{
	double x = 0;
	cout << "������һ��x" << endl;
	cin >> x;
	resolve(x);
	return 0;
}
