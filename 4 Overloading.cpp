#include<iostream>
using namespace std;
class Cal
{
	public:
		static int add(int a, int b)
		{
			return a+b;
		}
		static int add(int a, int b, int c)
		{
			return a+b+c;
		}
};

int main(void)
{
	Cal c;
	cout<<c.add(22,33)<<endl;
	cout<<c.add(22,33,44)<<endl;
}

// Causes of function Overloading
// 1. Type Conversion.
// 2. Function with default arguments.
// 3. Function with pass by reference.
