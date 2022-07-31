#include <iostream>

using namespace std;

void asd(const int *ptr, const int *ptr2) 
{
	for (;*ptr != *ptr2; ptr++) 
	{
		cout << *ptr << endl;
	}
}

int main()
{
	int array[] = {1,2,3,4,5};
	asd(array+2,array+4);

}
