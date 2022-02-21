// TComplex.h : This file contains the signatures of all methods and functions of class TComplex.
// Class TComplex is a trigonometric representation of complex numbers.
// Khoroshun O. 2/21/2022

#pragma once

#include "AComplex.h"

class TComplex {
private:
	double _ro; // Modulus
	double _phi; // Argument
public:
	TComplex(const double ro = 0, const double phi = 0);
	TComplex(const TComplex& z);
	~TComplex();

	// Selectors
	const double& mod() const;
	const double& arg() const;

	// Selectors-modifiers
	double& mod();
	double& arg();

	// Real and imaginary parts
	double re() const;
	double im() const;

	// operators
	TComplex& operator=(const TComplex&);
	TComplex& operator*=(const TComplex&);
	TComplex& operator/=(const TComplex&);
};

const TComplex operator*(const TComplex&, const TComplex&);
const TComplex operator/(const TComplex&, const TComplex&);

bool operator==(const TComplex&, const TComplex&);
bool operator!=(const TComplex&, const TComplex&);

ostream& operator<<(ostream&, const TComplex&);