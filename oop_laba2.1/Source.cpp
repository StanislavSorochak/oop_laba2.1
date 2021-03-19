//////////////////////////////////////////////////////////////////////////////
// Source.cpp 
#include "Money.h"
#include <Windows.h>

Money makeMoney(int nominal, int number)
{
	Money bb(nominal, number);
	return bb;
}

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	Money b = makeMoney(2, 3);
	Money b2;
	Money b3(5, 5);
	Money b4;
	cin >> b4;
	b2 = b3;
	cout << "nominal*number= " << b.summa() << endl;
	cout << b;
	cout << b2;
	cout << b3;
	cout << b4;
	--b;
	b3++;
	cout << b;
}
