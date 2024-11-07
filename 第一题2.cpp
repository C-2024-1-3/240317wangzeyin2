#include<iostream>
#include<iomanip>
using namespace std;
void zhuanhua(char a)
{
	if(isalpha(a))
	{
		char letter=toupper(a);
		cout<<letter; 
	}
	else
	{
		int count=0;
		count=(int)a;
		cout<<count+1;
	}
}
int main()
{
	char a;
	cin>>a;
	zhuanhua(a);
}
