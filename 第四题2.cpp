#include<iostream>
using namespace std;
int caculate(int a,char b,int c)
{
	if((int)b==43)//加法 
	{
		return a+c;
	}
	else if((int)b==42)//乘法 
	{
		return a*c;
	}
	else if((int)b==45)//减法
	{
		return a-c;
	} 
	else if((int)b==47)//除法
	{
		return a/c;
	} 
}
int main()
{
	int count=0;
	int T=0;
	char letter='+';
	while(letter!='=')
	{
		cin>>T;
		count=caculate(count,letter,T);
		cin>>letter;
	}
	cout<<count<<endl;
}

