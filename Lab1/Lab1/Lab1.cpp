#include "Fraction.h"

using namespace std;

int main()
{
	Fraction a;
	Fraction b(1.234, 3);
	Fraction c(1, 4);
	a.input();
	a.output();
	cout << endl;
	b.output();
	cout << endl;
	c.output();
	cout << endl;

	

	a.setValue(20, 15);
	b.setDenominator(5);
	c.setNumerator(2);
	a.output();
	b.output();
	c.output();
	

	

	int a1, a2, b1, c2;
	a.getValue(a1, a2);
	b.getNumerator(b1);
	c.getDenominator(c2);
	cout << "a value: " << a1 << ", " << a2 << endl;
	cout << "b numerator: " << b1 << endl;
	cout << "c denominator: " << c2 << endl;



	Fraction d;
	d = a + b;
	cout << "a + b = ";
	d.output();
	cout << endl;
	d = a - b;
	cout << "a - b = ";
	d.output();
	cout << endl;
	d = a * b;
	d.reduce();
	cout << "shorten a * b = ";
	d.output();
	cout << endl;
	d = a / b;
	d.reduce();
	cout << "shorten a / b = ";
	d.output();
	cout << endl;

	

	if (a > b) {
		cout << "a > b" << endl;
	}
	if (a < b) {
		cout << "a < b" << endl;
	}
	if (a == b) {
		cout << "a == b" << endl;
	}
	if (a != b) {
		cout << "a != b" << endl;
	}
	

	

	double x;
	x = double(a);
	cout << "a to double: " << x << endl;

	x = 1.866;
	d.fromDouble(x);
	cout << "1.866 to Fraction .3: ";
	d.output();
	cout << endl;

	int y;
	y = int(a);
	cout << "the whole part of a: " << y << endl;

	return 0;
}