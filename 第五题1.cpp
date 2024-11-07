#include<iostream>
using namespace std;
double zh(double a)
{
	double b=(a-32)/1.8;
	return b;
}
int main()
{
	double a;
	cin>>a;
	double b=zh(a);
	cout<<b;
}
