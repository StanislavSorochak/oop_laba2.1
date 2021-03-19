////////////////////////////////////////////////////////////////////////////// 
// Money.cpp 
#include "Money.h"


Money::Money() //конструктор за умовчанням
{
	nominal = 0;
	number = 0;
}
Money::Money(int value, int value2) //ініціалізація
{
	if (value >= 0 && value == 1 || value == 2 || value == 5 || value == 10 || value == 20 || value == 50 || value == 100 || value == 200 || value == 500 && value2 >= 0)

	{
		nominal = value;
		number = value2;
	}
	else
	{
		cout << "Введено помилкове значення" << endl;
		nominal = 0;
		number = 0;
	}
}
Money::Money(const Money& copy)//копіювання
{
	nominal = copy.nominal;
	number = copy.number;
}
Money::operator string() const//перетворення у літерний рядок
{
	stringstream ss;
	ss << "nominal= " << nominal << " number= " << number << endl;
	return ss.str();
}
ostream& operator << (ostream& out, const Money& b)//"вивід"(на екран)
{
	out << (string)b;
	return out;
}
istream& operator >> (istream& in, Money& b)//"ввід"(введення з клавіатури)
{
	do {

		cout << "Введіть номінал купюри: "; in >> b.nominal;
		cout << "Введіть кількість купюр:  "; in >> b.number;
	} while (b.nominal < 0 || b.number < 0);
	cout << endl;
	return in;
}

void Money::SetFirst(int value)
{
	if (value >= 0)
		nominal = value;
	else
		number = 0;
}
void Money::SetSecond(int value)
{
	if (value >= 0)
		nominal = value;
	else
		number = 0;
}
Money& Money::operator = (const Money& b)//"присвоєння"
{
	nominal = b.nominal;
	number = b.number;
	return *this;
}
Money& Money::operator --()//"дикремент"(префіксна форма)
{
	if (nominal > 0)
		--nominal;
	return *this;
}
Money& Money::operator ++()//"інкремент"(префіксна форма)
{
	++nominal;
	return *this;
}
Money Money::operator --(int)//"дикремент"(постфіксна форма)
{
	Money a(*this);
	if (nominal > 0)
		nominal--;
	return a;
}
Money Money::operator ++(int)//"інкремент"(постфіксна форма)
{
	Money a(*this);
	number++;
	return a;
}
