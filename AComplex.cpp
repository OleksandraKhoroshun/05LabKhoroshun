// AComplex.cpp : This file contains the realization of all methods and functions of class AComplex.
// Khoroshun O. 2/21/2022

#include "AComplex.h"

AComplex::AComplex(const double re, const double im) :
	_re(re),
    _im(im)
{
#ifndef NDEBUG
	cout << "AComplex " << *this << " created." << endl;
#endif
}

AComplex::AComplex(const AComplex& z):
	_re(z.re()),
	_im(z.re())
{
#ifndef NDEBUG
	cout << "AComplex " << *this << " copied." << endl;
#endif
}

AComplex::~AComplex() {
#ifndef NDEBUG
	cout << "AComplex " << *this << " deleted." << endl;
#endif
}

AComplex::operator TComplex() const {
	return TComplex(mod(), arg());
}

const double& AComplex::re() const {
	return _re;
}

const double& AComplex::im() const {
	return _im;
}

// Selectors-modifiers
double& AComplex::re() {
	return _re;
}

double& AComplex::im() {
	return _im;
}

// Modulus and argument 
double AComplex::mod() const {
	return sqrt(re() * re() + im() * im());
}

double AComplex::arg() const {
	return atan2(im(), re());
}

// Conjugate
const AComplex AComplex::conj() const {
	return AComplex(re(), -im());
}

// operators
AComplex& AComplex::operator=(const AComplex& z) {
	_re = z.re();
	_im = z.im();
	return *this;
}

AComplex& AComplex::operator+=(const AComplex& z) {
	_re += z.re();
	_im += z.im();
	return *this;
}

AComplex& AComplex::operator-=(const AComplex& z) {
	_re -= z.re();
	_im -= z.im();
	return *this;
}

const AComplex operator+(const AComplex& a, const AComplex& b) {
	return AComplex(a.re() + b.re(), a.im() + b.im());
}

const AComplex operator-(const AComplex& a, const AComplex& b) {
	return AComplex(a.re() - b.re(), a.im() - b.im());
}

bool operator==(const AComplex& a, const AComplex& b) {
	return (a.re()==b.re() && a.im()==b.im());
}
bool operator!=(const AComplex& a, const AComplex& b) {
	return !(a == b);
}

ostream& operator<<(ostream& os, const AComplex& z) {
	os << "(" << z.re() << "+" << z.im() << "i)";
	return os;
}
