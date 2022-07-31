#include <iostream>

using namespace std;

class Deneme
{
public:

	char* p = (char*)"zrrr";

};


int bolme(int x,int y) 
{
	if (y == 0)
	{
		throw Deneme();
	}
	else
	{
		return x / y;
	}
}

int main()
{
	try
	{

		cout << "marabalar" << endl;

		bolme(5, 0);

		cout << "marabalar" << endl;
	}
	catch (Deneme nesne)
	{
		cout << nesne.p << endl;
	}

}