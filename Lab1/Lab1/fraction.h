#include <iostream>


class Fraction {
public: 
	// ������������ (1 �� ���������, 2 � �����������)
	Fraction();
	Fraction(int a, int b);
	Fraction(double a, int rounding = 3);
	// ������������ / ��������� ��������� / ����������� �����
	bool setValue(int a, int b);
	void setNumerator(int a);
	bool setDenominator(int a);
	void getValue(int& a, int& b) const;
	void getNumerator(int& a) const;
	void getDenominator(int& a) const ;
	// ���� / ����� �����
	void input();
	void inputDouble();
	void output() const;
	// ���������� ����� � ������������ 
	void reduction();
	// �������������� ��������
	Fraction operator-(Fraction r) const;
	Fraction operator+(Fraction r) const;
	Fraction operator*(Fraction r) const;
	Fraction operator/(Fraction r) const;
	// ��������� ��������� 
	bool operator==(Fraction r) const;
	bool operator!=(Fraction r) const;
	bool operator>(Fraction r) const;
	bool operator<(Fraction r) const;
	// ������� ����� �� ���������� � ������������
	void fromDouble(double a);
	// ������� ������������ ����� � ����� �����
	operator int();
	// ������� ������������ ����� � ���������� (� ��������� 3 ����� ����� �������)
	operator double();
private:
	int numerator;
	int denominator;
	// �������� �������� (��� ������ ���)
	int euklid(int a, int b);
};