#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

double ortalama(int sayi, ...)
{
	double toplam = 0;

	va_list listem;

	va_start(listem, sayi);


	for (int i = 0; i < sayi; i++)
	{
		printf("%d\n", va_arg(listem, int));
	}

	for (int i = 0; i < sayi; i++)
	{
		toplam += va_arg(listem, int);
	}

	va_end(listem);

	return toplam / sayi;
}

int main() 
{
	printf("%.2f \n", ortalama(5, 1, 2, 3, 4, 5));


}