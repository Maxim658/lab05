#pragma once
#include <iostream>
using namespace std;
class Complex
{
public:

	int a;
	int b;
	Complex();
	Complex(int im, int re);
	Complex(const Complex &obj);

	Complex& operator=(const Complex& right);
	Complex& operator++();
	Complex& operator++(int);
	Complex& operator--();
	Complex& operator--(int);
	friend bool operator==(const Complex& left, const Complex& right);
	friend ostream& operator<< (ostream &out, const Complex &comp);
	friend istream& operator>> (istream &in, Complex &comp);

	double Module();
	void Arguments();
	~Complex();
};