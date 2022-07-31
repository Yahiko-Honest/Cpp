#include <iostream>

using namespace std;

int main() {

	string sys_username = "marabalar";
	string sys_password = "marabalar";
	string username;
	string password;

	cout << "Kullanici adini giriniz: " << endl;
	cin >> username;
	cout << "Paraloyi giriniz: " << endl;
	cin >> password;

	if (username == "deneme"  && password == sys_password)
	{
		cout << "Hosgeldiniz!!" << endl;
	}
	else
	{
		cout << "Girdiginiz bilgiler hatalidir!!" << endl;
	}
}