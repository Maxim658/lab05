#include "pch.h"
#include "Complex.h"
#include "Vector.h"
#include <iostream>
using namespace std;

Complex::Complex() { }
Complex::Complex(int im, int re)
{
	a = im;
	b = re;
}
Complex::Complex(const Complex &obj)
{
	a = obj.a;
	b = obj.b;
}

double Complex::Module()
{
	return sqrt(a * a + b * b);
}
void Complex::Arguments()
{
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
}
Complex::~Complex() {}

Complex& Complex::operator=(const Complex& right)
{
	if (this == &right)
		return *this;
	a = right.a;
	b = right.b;
	return *this;
}
Complex& Complex::operator++()
{
	a++;
	b++;
	return *this;
}
Complex& Complex::operator++(int)
{
	Complex oldComplex;
	a++;
	b++;
	return oldComplex;
}
Complex& Complex::operator--()
{
	a--;
	b--;
	return *this;
}
Complex& Complex::operator--(int)
{
	Complex oldComplex;
	a--;
	b--;
	return oldComplex;
}

Vector::Vector() { }
Vector::Vector(int ax, int ay)
{
	x = ax;
	y = ay;
}
Vector::Vector(const Vector &obj)
{
	x = obj.x;
	y = obj.y;
}
double Vector::Module()
{
	return sqrt(x * x + y * y);
}
Vector&::Vector::Plus(Vector n)
{
	Vector result;
	result.x = x + n.x;
	result.y + y + n.y;
	return result;
}
Vector&::Vector::Minus(Vector n)
{
	Vector result;
	result.x = x - n.x;
	result.y + y - n.y;
	return result;
}
Vector::~Vector() {}

bool operator==(const Complex& left, const Complex& right)
{
	return left.a == right.a && left.b == right.b;
}
ostream& operator<< (ostream &out, const Complex &comp)
{
	out << comp.a << " + (" << comp.b << ")i";
	return out;
}
istream& operator>> (istream &in, Complex &comp)
{
	in >> comp.a;
	in >> comp.b;
	return in;
}

Vector& Vector::operator=(const Vector& right)
{
	if (this == &right)
		return *this;
	x = right.x;
	y = right.y;
	return *this;
}
bool operator==(const Vector& left, const Vector& right)
{
	return left.x == right.x && left.y == right.y;
}
ostream& operator<< (ostream &out, const Vector &vect)
{
	out << "Vector( " << vect.x << "; " << vect.y << ")";
	return out;
}
istream& operator>> (istream &in, Vector &vect)
{
	in >> vect.x;
	in >> vect.y;
	return in;
}