// TComplex.cpp : This file contains the realization of all methods and functions of class TComplex.
// Khoroshun O. 2/21/2022

#include "TComplex.h"

TComplex::TComplex(const double ro , const double phi):
	_ro(ro),
	_phi(phi)
{
#ifndef NDEBUG
	cout << "TComplex " << *this << " created." << endl;
#endif
}

TComplex::TComplex(const TComplex& z):
	_ro(z.mod()),
	_phi(z.arg())
{
#ifndef NDEBUG
	cout << "TComplex " << *this << " copied." << endl;
#endif
}

TComplex::~TComplex() {
#ifndef NDEBUG
	cout << "TComplex " << *this << " deleted." << endl;
#endif
}

// Selectors
const double& TComplex::mod() const {
	return _ro;
}
const double& TComplex::arg() const {
	return _phi;
}

// Selectors-modifiers
double& TComplex::mod() {
	return _ro;
}

double& TComplex::arg() {
	return _phi;
}

// Real and imaginary parts
double TComplex::re() const {
	return mod() * cos(arg());
}

double TComplex::im() const {
	return mod() * sin(arg());
}

// operators
TComplex& TComplex::operator=(const TComplex& z) {
	_ro = z.mod();
	_phi = z.arg();
	return *this;
}

TComplex& TComplex::operator*=(const TComplex& z)  {
	_ro *= z.mod();
	_phi += z.arg();
	return *this;
}

TComplex& TComplex::operator/=(const TComplex& z) {
	_ro /= z.mod();
	_phi -= z.arg();
	return *this;
}

const TComplex operator*(const TComplex& a, const TComplex& b) {
	return TComplex(a.mod() * b.mod(), a.arg() + b.arg());
}

const TComplex operator/(const TComplex& a, const TComplex& b) {
	return TComplex(a.mod() / b.mod(), a.arg() - b.arg());
}

bool operator==(const TComplex& a, const TComplex& b) {
	return (a.mod() == b.mod(), a.arg() == b.arg());
}
bool operator!=(const TComplex& a, const TComplex& b) {
	return !(a == b);
}

ostream& operator<<(ostream& os, const TComplex& z) {
	os << "(" << z.mod() << "*( cos(" << z.arg()<<") + i*sin("<< z.arg() << "))";
	return os;
}