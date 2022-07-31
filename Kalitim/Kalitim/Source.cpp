#include <iostream>

using namespace std;

class Hayvan
{
public:
	void kosma() {};
	void uyuma() {};

protected:
	int yas;

private:
	int boyu;
};

class Kedi : public Hayvan
{
public:
	Kedi(int y) { yas = y; }

	void Kedi_Ses() { cout << (yas > 5 ? "Meow" : "Miw") << endl; }
};

class Kopek : public Hayvan
{
public:
	Kopek(int y) { yas = y; }

	void Kopek_Ses() { cout << (yas > 2 ? "Haw" : "Hiw") << endl; }
};

int main() 
{

	int a;
	char b[10];

	cout << "Hayvan yasi: " << endl;
	cin >> a;

	cout << "Hangi hayvan" << endl;
	cin >> b;

	if (strcmp(b, "kopek") == 0)
	{
		Kopek h(a);
		h.Kopek_Ses();
	}
	else if (strcmp(b, "kedi") == 0)
	{
		Kedi h(a);
		h.Kedi_Ses();
	}
	else
	{
		cout << "Yanlis giris yaptiniz!" << endl;
	}


	system("Pause");
}