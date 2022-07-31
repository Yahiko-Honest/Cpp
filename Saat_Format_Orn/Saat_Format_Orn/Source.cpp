#include <iostream>

using namespace std;

class Zaman
{
public:

	Zaman();	//Constructor
	void zamanAyarla(int, int, int);
	void zamanYazdir();


private:
	int saat;
	int dakika;
	int saniye;

};

Zaman::Zaman()
{
	saat = dakika = saniye = 0;
}

void Zaman::zamanAyarla(int h, int m, int s)
{
	saat = ((h >= 0 && h < 24) ? h : 0);
	dakika = ((m >= 0 && m < 60) ? m : 0);
	saniye = ((s >= 0 && s < 60) ? s : 0);
}

void Zaman::zamanYazdir()
{
	cout << ((saat == 0 || saat == 12) ? 12 : saat % 12) << " : "
		<< (dakika < 10 ? "0" : "") << dakika << " : "
		<< (saniye < 10 ? "0" : "") << saniye << " "
		<< (saat < 12 ? "AM" : "PM")
		<< endl;
}

int main()
{
	Zaman z;

	int a, b, c;

	cout << "Saati giriniz: ";
	cin >> a;

	cout << "Dakikayi giriniz: ";
	cin >> b;

	cout << "Saniyeyi giriniz: ";
	cin >> c;

	z.zamanAyarla(a, b, c);
	z.zamanYazdir();

	system("Pause");
}