#include <iostream>

using namespace std;

class Insan
{
public:
	char isim[20];
	char* soyad;
	int yas;
	double boy;

	void kos()
	{
		cout << "English English girl name fiona!" << endl;
	}
	void dur()
	{
		cout << "Haram Haram" << endl;
	}
};

int main()
{
	Insan a;

	strcpy_s(a.isim, "Mukarrem");
	a.soyad = (char*)"Palabiyik";
	a.yas = 21;
	a.boy = 1.73;

	cout << a.isim << " brr " << endl;
	a.kos();


} 