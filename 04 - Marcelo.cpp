#include <iostream>

using namespace std;

int main()
{
	char a,b,c;
	
	int x, value;
	
	cout<<"Enter 1st Letter: ";
	cin>>a;
	cout<<"Enter 2nd Letter: ";
	cin>>b;
	
	x=int(b) - int(a);
	value = int(a) + 1;
	
	for( int i = x; i != 1; i--)
	{
		c = char(value);
		value = value + 1;
		cout<< c << " " ;
	}
	cout<< endl;
	system("pause");
}
