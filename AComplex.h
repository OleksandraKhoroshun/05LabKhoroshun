// AComplex.h : This file contains the signatures of all methods and functions of class AComplex.
// Class AComplex is an algebraic representation of complex numbers.
// Khoroshun O. 2/21/2022

#pragma once

#include <iostream>
#include <math.h> 
using namespace std;
#include "TComplex.h"

class TComplex;
class AComplex {

private:
	double _re; // real part
	double _im; //imaginary part

public:
	AComplex(const double re = 0, const double im = 0);
	AComplex(const AComplex& z);
	~AComplex();

	operator TComplex() const;

	// Selectors
	const double& re() const;
	const double& im() const;

	// Selectors-modifiers
	double& re();
	double& im();

	// Modulus and argument 
	double mod() const;
	double arg() const;

	// Conjugate
	const AComplex conj() const;

	// operators
	AComplex& operator=(const AComplex&);
	AComplex& operator+=(const AComplex&);
	AComplex& operator-=(const AComplex&);
};

const AComplex operator+(const AComplex&, const AComplex&);
const AComplex operator-(const AComplex&, const AComplex&);

bool operator==(const AComplex&, const AComplex&);
bool operator!=(const AComplex&, const AComplex&);

ostream& operator<<(ostream&, const AComplex&);
