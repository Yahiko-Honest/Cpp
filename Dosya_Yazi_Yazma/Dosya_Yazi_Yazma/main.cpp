#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
	ofstream deneme;

	deneme.open("Yazi.txt");
	deneme << "niggas in paris" << endl;
	deneme << "white man has black butt" << endl;
	deneme.close();


	ifstream deneme2;
	string satir;

	deneme2.open("Yazi.txt");

	while (getline(deneme2, satir))
	{
		cout << satir << endl;
	}

	deneme2.close();

	string kelime;
	ifstream deneme3("Yazi.txt");
	deneme3 >> kelime;

	while (deneme3 >> kelime)
	{
		cout << kelime << endl;
	}


	deneme3.close();
}