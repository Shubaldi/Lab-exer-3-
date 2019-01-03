#include <iostream>
using namespace std;

char linechar(char x)
{
	for(int i = 1 ; i <= x ; i++)
	{
		cout<< "*";
	}
	cout<< endl;
	
	for(int i = 1; i <= x; i++)
	{
		cout<< "@";
	}
	cout<<endl;
}

char linechar(int y, char z)
{
	for(int i = 1; i <= y; i++)
	{
		cout<<"*";
	}
	cout<<endl;
	for(int i = 1; i <= z ; i++)
	{
		cout<<"#";
	}
	cout<<endl;
}

int main()
{
	char x = 20, y = 10, z = 15;
	linechar(x);
	linechar(y,z);
}
