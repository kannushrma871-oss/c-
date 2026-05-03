#include<iostream>
using namespace std;
class A
{
	int a;
	public:
		void display()
		{
			cout<<"Class A";
		}
};
class B: public A
{
	int b;
	public:
		void display()
		{
			cout<<"Class B";
		}
};

int main()
{
	B  b;
	b.display();
	b.display();
}
