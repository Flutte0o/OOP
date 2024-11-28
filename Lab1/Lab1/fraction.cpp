#include <iostream>
#include "fraction.h"

using namespace std;

Fraction::Fraction()
	: Fraction(0 ,1)
{ }

Fraction::Fraction(int a, int b) : numerator(0), denominator(1)
{
	if (b != 0) {
		numerator = a;
		denominator = b;
	}
	else
		cerr << "Denominator can't be 0" << endl;
}

Fraction::Fraction(double a, int precision)
{
	if (precision < 0) {
		cerr << "Precision may not be < 0";
		precision = 1;
	}

	denominator = pow(10, precision);
	numerator = a * denominator;
	reduce();
}

bool Fraction::setValue(int a, int b)
{
	if (b != 0) {
		numerator = a;
		denominator = b;
		return true;
	}
	else {
		cerr << "Denominator can't be 0." << endl;
		return false;
	}
}

void Fraction::setNumerator(int a)
{
	numerator = a;
}

bool Fraction::setDenominator(int a)
{
	if (a != 0) {
		denominator = a;
		return true;
	}
	else {
		cerr << "Denominator may not be 0." << endl;
		return false;
	}
}

void Fraction::getValue(int& a, int& b) const 
{
	a = numerator;
	b = denominator;
}

void Fraction::getNumerator(int& a) const
{
	a = numerator;
}

void Fraction::getDenominator(int& a) const 
{
	a = denominator;
}

void Fraction::input()
{
	cout << "Input Fraction: " << endl;
	cin >> numerator >> denominator;
}

void Fraction::inputDouble()
{
	double temp;
	cout << "Input decimal: " << endl;
	cin >> temp;
	this->fromDouble(temp);
}

void Fraction::output() const
{
	cout << numerator << "/" << denominator << endl;
}

void Fraction::reduce()
{
	Fraction temp_f;
	int n = euklid(numerator, denominator);
	numerator /= n;
	denominator /= n;
}

Fraction Fraction::operator-(Fraction other) const
{
	Fraction temp_f;
	temp_f.setValue(this->numerator * other.denominator - other.numerator * this->denominator, this->denominator * other.denominator);
	return temp_f;
}

Fraction Fraction::operator+(Fraction other) const
{
	Fraction temp_f;
	temp_f.setValue(this->numerator * other.denominator + other.numerator * this->denominator, this->denominator * other.denominator);
	return temp_f;
}

Fraction Fraction::operator*(Fraction other) const
{
	Fraction temp_f;
	temp_f.setValue(this->numerator * other.numerator, this->denominator * other.denominator);
	return temp_f;

}

Fraction Fraction::operator/(Fraction other) const
{
	Fraction temp_f;
	temp_f.setValue(this->numerator * other.denominator, this->denominator * other.numerator);
	return temp_f;
}

bool Fraction::operator==(Fraction other) const
{
	int a, b;
	a = this->numerator * other.denominator;
	b = other.numerator * this->denominator;
	if (a == b) {
		return true;
	}
	else {
		return false;
	}
}

bool Fraction::operator!=(Fraction other) const
{
	int a, b;
	a = this->numerator * other.denominator;
	b = other.numerator * this->denominator;
	if (a != b) {
		return true;
	}
	else {
		return false;
	}
}

bool Fraction::operator>(Fraction other) const
{
	int a, b;
	a = this->numerator * other.denominator;
	b = other.numerator * this->denominator;
	if (a > b) {
		return true;
	}
	else {
		return false;
	}
}

bool Fraction::operator<(Fraction other) const
{
	int a, b;
	a = this->numerator * other.denominator;
	b = other.numerator * this->denominator;
	if (a < b) {
		return true;
	}
	else {
		return false;
	}
}

void Fraction::fromDouble(double a)
{
	a *= 1000;
	numerator = int(a);
	denominator = 100;
	reduce();
}

Fraction::operator int()
{
	int temp = numerator / denominator;
	return temp;
}

Fraction::operator double()
{
	double temp = double(numerator / denominator);
	return temp;
}

int Fraction::euklid(int a, int b)
{
	while (a != b) {
		if (a > b) {
			a -= b;
		}
		else {
			b -= a;
		}
	}
	return a;
}

