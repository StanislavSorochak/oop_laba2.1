//////////////////////////////////////////////////////////////////////////////
// Money.h
#pragma once
#include <iostream>
#include <sstream>

using namespace std;
class Money
{
private:
	int nominal;
	int number;
public:
	Money();
	Money(int value, int value2);
	Money(const Money& copy);

	int summa() { return nominal * number; };
	int GetFirst() const { return nominal; };
	int GetSecond() const { return number; };

	void SetFirst(int value);
	void SetSecond(int value);


	operator string() const;
	friend ostream& operator << (ostream& out, const Money&);
	friend istream& operator >> (istream& in, Money&);
	Money& operator = (const Money& b);
	Money& operator --();
	Money& operator ++();
	Money operator --(int);
	Money operator ++(int);
};
