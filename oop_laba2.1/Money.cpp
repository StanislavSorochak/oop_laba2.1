////////////////////////////////////////////////////////////////////////////// 
// Money.cpp 
#include "Money.h"


Money::Money() //����������� �� ����������
{
	nominal = 0;
	number = 0;
}
Money::Money(int value, int value2) //�����������
{
	if (value >= 0 && value == 1 || value == 2 || value == 5 || value == 10 || value == 20 || value == 50 || value == 100 || value == 200 || value == 500 && value2 >= 0)

	{
		nominal = value;
		number = value2;
	}
	else
	{
		cout << "������� ��������� ��������" << endl;
		nominal = 0;
		number = 0;
	}
}
Money::Money(const Money& copy)//���������
{
	nominal = copy.nominal;
	number = copy.number;
}
Money::operator string() const//������������ � ������� �����
{
	stringstream ss;
	ss << "nominal= " << nominal << " number= " << number << endl;
	return ss.str();
}
ostream& operator << (ostream& out, const Money& b)//"����"(�� �����)
{
	out << (string)b;
	return out;
}
istream& operator >> (istream& in, Money& b)//"���"(�������� � ���������)
{
	do {

		cout << "������ ������ ������: "; in >> b.nominal;
		cout << "������ ������� �����:  "; in >> b.number;
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
Money& Money::operator = (const Money& b)//"���������"
{
	nominal = b.nominal;
	number = b.number;
	return *this;
}
Money& Money::operator --()//"���������"(��������� �����)
{
	if (nominal > 0)
		--nominal;
	return *this;
}
Money& Money::operator ++()//"���������"(��������� �����)
{
	++nominal;
	return *this;
}
Money Money::operator --(int)//"���������"(���������� �����)
{
	Money a(*this);
	if (nominal > 0)
		nominal--;
	return a;
}
Money Money::operator ++(int)//"���������"(���������� �����)
{
	Money a(*this);
	number++;
	return a;
}
