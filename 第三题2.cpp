#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	cin>>a>>b>>c;
	if(a+b>c&&a+c>b&&b+c>a)
	{
		cout<<a+b+c<<endl;
		if(a==b||a==c||b==c)
		{
			cout<<"�ǵ���������"<<endl; 
		}
		else
		{
			cout<<"����"<<endl; 
		}
	}
	else
	cout<<"����������"<<endl;
}

