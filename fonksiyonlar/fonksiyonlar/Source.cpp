#include <iostream>
#include <math.h>

using namespace std;

namespace bir
{
	int x;

	void yaz()
	{
		cout << x << endl;
	}
}


namespace iki
{
	int y;

	void yaz() 
	{
		cout << y << endl;
	}
}


using namespace iki;

int main()
{
	bir::x = 10;
	bir::yaz();

	y = 20;
	yaz();

}
