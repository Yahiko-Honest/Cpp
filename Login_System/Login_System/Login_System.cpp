#include <iostream>
#include "Header.h"

int main() {

	PersonelInfo personalinfo;

	cout << "Kullanici adi giriniz: " << endl;
	cin >> personalinfo.user_name;
	cout << "Sifreyi giriniz: " << endl;
	cin >> personalinfo.password;

	personalinfo.Check();
}