#include<iostream>
using namespace std;
int main()
{
	int a,b,c=0,d=0;
	cin>>a>>b;
	for(int i=a*b;i>0;i--)
	{
		if(i%a==0&&i%b==0)
		{
			c=i;
		}
	}
	for(int i=1;i<=a&&i<=b;i++)
	{
		if(a%i==0&&b%i==0)
		{
			d=i;
		}
	}
	cout<<c<<endl;
	cout<<d<<endl;
}
