#include <iostream>

using namespace std;

class A
{
public:
	virtual void func() { cout << "Nesne A" << endl; };
	int a;
};

class B : public A
{
public:
	void func() { cout << "Nesne B" << endl; };
};

class C : private A
{
public:
	void func() { cout << "Nesne C" << endl; };
	int b = a;
};

int main() 
{
	A nesneA;
	B nesneB;
	C nesneC;
	A *ptr = new A;

	ptr->func();
	ptr = &nesneB;
	ptr->func();

	nesneA.func();
	nesneB.func();
	nesneC.func();


	system("Pause");

}