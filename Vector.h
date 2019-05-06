#pragma once
#include <iostream>
using namespace std;
class Vector
{
public:
	int x;
	int y;
	Vector();
	Vector(int ax, int ay);
	Vector(const Vector &obj);
	double Module();
	Vector& Plus(Vector n);
	Vector& Minus(Vector n);

	Vector& operator=(const Vector& right);
	friend bool operator==(const Vector& left, const Vector& right);
	friend ostream& operator<< (ostream &out, const Vector &vect);
	friend istream& operator>> (istream &in, Vector &vect);

	~Vector();
};
