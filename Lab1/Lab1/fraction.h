#include <iostream>


class Fraction {
public: 
	// Конструкторы (1 по умолчанию, 2 с параметрами)
	Fraction();
	Fraction(int a, int b);
	Fraction(double a, int precision = 3);
	// Установление / Получение числителя / Знаменателя дроби
	bool setValue(int a, int b);
	void setNumerator(int a);
	bool setDenominator(int a);
	void getValue(int& a, int& b) const;
	void getNumerator(int& a) const;
	void getDenominator(int& a) const ;
	// Ввод / Вывод дроби
	void input();
	void inputDouble();
	void output() const;
	// Приведение дроби к несократимой 
	void reduce();
	// Арифметические действия (Перегрузки)
	Fraction operator-(Fraction r) const;
	Fraction operator+(Fraction r) const;
	Fraction operator*(Fraction r) const;
	Fraction operator/(Fraction r) const;
	// Операторы сравнения  (Перегрузки)
	bool operator==(Fraction r) const;
	bool operator!=(Fraction r) const;
	bool operator>(Fraction r) const;
	bool operator<(Fraction r) const;
	// Перевод дроби из десятичной в обыкновенную (С точностью до 3-х знаков после запятой)
	void fromDouble(double a);
	// Выделение целой части
	operator int();
	// Перевод обыкновенной дроби в десятичную 
	operator double();
private:
	int numerator;
	int denominator;
	// Алгоритм Евклида (Для поиска НОД)
	int euklid(int a, int b);
};