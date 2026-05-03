#include<iostream>
using namespace std;
class A
{
	int x;
	public:
		A(){}
		A(int i)
		{
			x = i;
		}
		void operator+(A);
		void display();
};

void A::operator+(A a)
{
	int m = x+a.x;
	cout<<"The resilt of the  addition of two objects are: "<<m;
}
int main()
{
	A a1(5);
	A a2(4);
	a1+a2;
}
