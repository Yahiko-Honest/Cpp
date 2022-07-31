#include <iostream>

using namespace std;

class Operatorler
{
private:

	int sayi;

public:

	void setsayi(int a) { sayi = a; };
	int getsayi() { return sayi; };

	void operator +( Operatorler x) { sayi += x.getsayi(); };
};

int main() 
{

	Operatorler o;
	Operatorler o2;

	o.setsayi(9);
	o2.setsayi(5);

	o+o2;
	cout << o.getsayi() << endl;


	system("Pause");
}