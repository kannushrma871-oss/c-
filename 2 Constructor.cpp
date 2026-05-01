#include<iostream>
using namespace std;
class Aryabhatta
{
	public:
		int A;
		int B;
		int C;
		Aryabhatta(int a, int b)
		{
			A = a;
			B = b;
			
		}
		void Employee()
		{
			C = A+B;
			cout<<"Addition of A and B is: "<<C<<endl;
		}
		void Karnav()
		{
			C = A-B;
			cout<<"Subtraction of A and B is: "<<C<<endl;
		}
};
int main()
{
	Aryabhatta a1 = Aryabhatta(7,5);
	Aryabhatta a2 = Aryabhatta(9,5);
	a1.Employee();
	a2.Employee();
	a1.Karnav();
	a2.Karnav();
}
