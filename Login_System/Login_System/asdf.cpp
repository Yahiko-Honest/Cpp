#include <iostream>
#include "Header.h"

void PersonelInfo::Check() {

	if (real_shit == user_name && real_mother == password)
	{
		cout << "Hosgeldiniz" << endl;
	}
	else if (real_shit != user_name && real_mother == password)
	{
		cout << "Kullanici girisi hatali" << endl;
	}
	else if (real_shit == user_name && real_mother != password)
	{
		cout << "Parola hatali" << endl;
	}
	else if (real_shit != user_name && real_mother != password)
	{
		cout << "Bir seyi bil be got!!" << endl;
	}
}