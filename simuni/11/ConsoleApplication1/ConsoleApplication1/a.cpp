#include <iostream>
#include "a.h";


void prazdnic(int day, int mon)
{
	if (day > 31 || day < 1 || mon > 12 || mon < 1)
	{
		throw "Error";
	}
	if (day == 1 && mon == 5)
		cout << "Prazdnic vesni i truda" << endl;
	if ((day == 1 && mon == 1) || (day == 31 && mon == 12))
		cout << "New Year" << endl;
	if (day == 8 && mon == 3)
		cout << "8 Mart" << endl;
	if (day == 23 && mon == 2)
		cout << "23 Feb" << endl;
}