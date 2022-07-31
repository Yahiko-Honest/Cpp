#include <iostream>

using namespace std;

class Deneme
{
public:
	int publicA;
protected:
	int protectedA;
private:
	int privateA;
};

class A : public Deneme
{
public:
	int a = publicA;
	int b = protectedA;
	//int c = privateA;
};

class B : protected Deneme
{
public:
	int a = publicA;
	int b = protectedA;
	//int c = privateA;
};

class B2 : public B
{
public:
	int a = protectedA;
};

class C : private Deneme
{
public:
	int a = publicA;
	int b = protectedA;
	//int c = privateA;
};

class C2 : public C
{
	int a = protectedA;		//protected deneme yapt���nda protectedA ya ula�abiliyorsun private da ula�am�yorsun protectede sadece miras�ndaki s�n�flar ula�abiliyor
};

int main()
{

	Deneme denek;

	denek.publicA;


	A nesneA;

	nesneA.a = 1;
	nesneA.b = 1;
	nesneA.publicA;

	B nesneB;

	nesneB.a;
	nesneB.b;
	

	C nesneC;

	nesneC.a;
	nesneC.b;

	
}