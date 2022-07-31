#include <iostream>

using namespace std;

int main()
{
	const int boyut = 500900900;
	int* dizi;

	//dizi = new int[boyut];

	try
	{
		dizi = new int[boyut];
	}
	catch (exception ex)
	{
		cout << ex.what() << endl;
	}

	system("Pause");
	
}