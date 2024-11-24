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
	// Арифметические действия
	Fraction operator-(Fraction r) const;
	Fraction operator+(Fraction r) const;
	Fraction operator*(Fraction r) const;
	Fraction operator/(Fraction r) const;
	// Операторы сравнения 
	bool operator==(Fraction r) const;
	bool operator!=(Fraction r) const;
	bool operator>(Fraction r) const;
	bool operator<(Fraction r) const;
	// Перевод дроби из десятичной в обыкновенную
	void fromDouble(double a);
	// Перевод обыкновенной дроби в целое число
	operator int();
	// Перевод обыкновенной дроби в десятичную (с точностью 3 знака после запятой)
	operator double();
	//Вывод дроби с выделением целой части 
private:
	int numerator;
	int denominator;
	// Евклидов алгоритм (Для поиска НОД)
	int euklid(int a, int b);
};