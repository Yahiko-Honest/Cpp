#include "Header.h"


void Cumle_Info::check()
{
	int i = 0;
	Harf_P as;

	while (cumle[i]) {
	
		as.harf = cumle[i];
		int j = i + 1;
		as.count++;
		if (cumle[i] == cumle[j])
		{
			as.count++;
			j++;
		}

		cout << as.harf << "'den " << as.count << "tane var." << endl;
		
		as.count = 0;

		i++;
	}

}