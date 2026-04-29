#include<iostream>
using namespace std;
class Animal
{
	public:
		void eat()
		{
			cout<<"...Dog is eating..."<<endl;
		}
};
class Dog: public Animal
{
	public:
		void bark()
		{
			cout<<"...Dog is barking..."<<endl;
		}
};
class BabyDog: public Dog
{
	public:
	void weep()
	{
		cout<<"...BabyDog is weeping..."<<endl;
	}
};
int main(void)
{
	BabyDog d1;
	d1.eat();
	d1.bark();
	d1.weep();
}
